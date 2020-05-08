/* Udacity Homework 3
   HDR Tone-mapping

  Background HDR
  ==============

  A High Dynamic Range (HDR) image contains a wider variation of intensity
  and color than is allowed by the RGB format with 1 byte per channel that we
  have used in the previous assignment.  

  To store this extra information we use single precision floating point for
  each channel.  This allows for an extremely wide range of intensity values.

  In the image for this assignment, the inside of church with light coming in
  through stained glass windows, the raw input floating point values for the
  channels range from 0 to 275.  But the mean is .41 and 98% of the values are
  less than 3!  This means that certain areas (the windows) are extremely bright
  compared to everywhere else.  If we linearly map this [0-275] range into the
  [0-255] range that we have been using then most values will be mapped to zero!
  The only thing we will be able to see are the very brightest areas - the
  windows - everything else will appear pitch black.

  The problem is that although we have cameras capable of recording the wide
  range of intensity that exists in the real world our monitors are not capable
  of displaying them.  Our eyes are also quite capable of observing a much wider
  range of intensities than our image formats / monitors are capable of
  displaying.

  Tone-mapping is a process that transforms the intensities in the image so that
  the brightest values aren't nearly so far away from the mean.  That way when
  we transform the values into [0-255] we can actually see the entire image.
  There are many ways to perform this process and it is as much an art as a
  science - there is no single "right" answer.  In this homework we will
  implement one possible technique.

  Background Chrominance-Luminance
  ================================

  The RGB space that we have been using to represent images can be thought of as
  one possible set of axes spanning a three dimensional space of color.  We
  sometimes choose other axes to represent this space because they make certain
  operations more convenient.

  Another possible way of representing a color image is to separate the color
  information (chromaticity) from the brightness information.  There are
  multiple different methods for doing this - a common one during the analog
  television days was known as Chrominance-Luminance or YUV.

  We choose to represent the image in this way so that we can remap only the
  intensity channel and then recombine the new intensity values with the color
  information to form the final image.

  Old TV signals used to be transmitted in this way so that black & white
  televisions could display the luminance channel while color televisions would
  display all three of the channels.
  

  Tone-mapping
  ============

  In this assignment we are going to transform the luminance channel (actually
  the log of the luminance, but this is unimportant for the parts of the
  algorithm that you will be implementing) by compressing its range to [0, 1].
  To do this we need the cumulative distribution of the luminance values.

  Example
  -------

  input : [2 4 3 3 1 7 4 5 7 0 9 4 3 2]
  min / max / range: 0 / 9 / 9

  histo with 3 bins: [4 7 3]

  cdf : [4 11 14]


  Your task is to calculate this cumulative distribution by following these
  steps.

*/

#include<limits.h>
#include<float.h>
#include<math.h>
#include<stdio.h>
#include "device_launch_parameters.h"
#include "utils.h"


__global__ void reduction((float* d_out, const float * d_in, int size,bool flag)
{
	extern __shared__ float data[];
	
	int x = thread.x;
	int gid = blockDim.x*blockIdx.x + x;
	
	if(gid>=size) {
		data[x] =d_in[0];	
	}
	else
		data[x] = d_in[gid];
	__syncthreads();
	for(int i = blockDim.x/2, i>0; i = i/2)
	{
		if(x < i)
		{
			if(flag)
			{
				float mini;
				if(data[x]<data[x+i])
					mini = data[x];
				else
					mini = data[x+i];
				data[x] = mini;
			}
			else
			{
				float mini;
				if(data[x]>data[x+i])
					mini = data[x];
				else
					mini = data[x+i];
				data[x] = mini;

			}
		}
		__syncthreads();
	}
	if(x == 0) {
		d_out[blockIdx.x] = data[0];
	}
}

__global__ void atomic(unsigned int* out_histo,  const float * d_in, int num, int size, float minal, float dim) {
	int x = threadIdx.x;
	int gid = x + blockDim.x*blockIdx.x;
	if (gid >= size) return;
	int flg  = ((d_in[gid] - minal)*num) / dim;		if(flg == num)
	{
		flg = num -1;
	}
	atomicAdd(&(out_histo[flg]), 1);
}

__global__ void find(unsigned int* d_out,const unsigned int* d_in, int size) {
	extern __shared__ unsigned int temp[];
	int x = threadIdx.x;
	int px = 0,py=1;
	temp[x] = x>0? d_in[x-1]:0; //exclusive scan
	__syncthreads();

	//double buffered
	for (int i = 1; i < size; i = i /2) {
		px = 1 - px;
		py = 1 - px;
		if (x >= i) temp[size*px + x] = temp[size*py + x]+temp[size*py + x - off];
		else temp[size*px + tid] = temp[size*py + x];
		__syncthreads();
	}
	d_out[x] = temp[py*size + x];
}

float convert(const float* const logd int isize,bool isMin) {
	int t = BLOCK_SIZE;
	float* d_current_in = NULL;
	int size = isize;
	int blocks = ceil(1.0f*size / t); 
	while (true) {
		float* d_out;
		checkCudaErrors(cudaMalloc(&d_out, blocks * sizeof(float)));
		//call reduce kernel: if first iteration use original vector, otherwise use the last intermediate result.
		if (d_current_in == NULL) reduction << <blocks, t, threads * sizeof(float) >> > (d_out, logd, size, isMin);
		else reduction << <blocks, t, threads * sizeof(float) >> > (d_out, d_current_in, size, isMin);;
		cudaDeviceSynchronize(); checkCudaErrors(cudaGetLastError());

		//free last intermediate result
		if (d_current_in != NULL) checkCudaErrors(cudaFree(d_current_in));

		if (blocks == 1) {
			//end of reduction reached
			float h_out;
			checkCudaErrors(cudaMemcpy(&h_out, d_out, sizeof(float), cudaMemcpyDeviceToHost));
			return h_out;
		}
		size = blocks;
		blocks = ceil(1.0f*size / t); 
		if (blocks == 0)blocks++;
		d_current_in = d_out;//point to new intermediate result
		
	}
	
}

unsigned int* calhis(const float* const logd, int nbin, int size, float vmin, float vrng) {
	unsigned int* error;
	checkCudaErrors(cudaMalloc(&error, numBins * sizeof(unsigned int)));
	checkCudaErrors(cudaMemset(error, 0, numBins * sizeof(unsigned int)));
	int threads = BLOCK_SIZE;
	int blocks = ceil(1.0f*size / threads);
	atomic << <blocks, threads >> >(error, logd, nbin,size, vmin, vrng);
	cudaDeviceSynchronize(); checkCudaErrors(cudaGetLastError());
	return error;
}
void your_histogram_and_prefixsum(const float* const d_logLuminance,
                                  unsigned int* const d_cdf,
                                  float &min_logLum,
                                  float &max_logLum,
                                  const size_t numRows,
                                  const size_t numCols,
                                  const size_t numBins)
{
  //TODO
  /*Here are the steps you need to implement
    1) find the minimum and maximum value in the input logLuminance channel
       store in min_logLum and max_logLum
    2) subtract them to find the range
    3) generate a histogram of all the values in the logLuminance channel using
       the formula: bin = (lum[i] - lumMin) / lumRange * numBins
    4) Perform an exclusive scan (prefix sum) on the histogram to get
       the cumulative distribution of luminance values (this should go in the
       incoming d_cdf pointer which already has been allocated for you)       */

	int size = numCols * numRows;
	max_logLum = convert(d_logLuminance,size,false);
	min_logLum = convert(d_logLuminance,size,true);
	
	unsigned int *out = compute(d_logLuminance, numBins, input_size, min_logLum, range);
	
	unsigned int out2 = calhis(d_logLuminance, numBins, input_size, min_logLum, range);
	find<<<1,numBins,2*numBins*sizeof(unsigned int)>>>(d_cdf,d_gisto, numBins);
}
