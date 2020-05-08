//Udacity HW 4
//Radix Sorting

#include "utils.h"
#include <float.h>
#include <math.h>
#include <stdio.h>

/* Red Eye Removal
   ===============
   
   For this assignment we are implementing red eye removal.  This is
   accomplished by first creating a score for every pixel that tells us how
   likely it is to be a red eye pixel.  We have already done this for you - you
   are receiving the scores and need to sort them in ascending order so that we
   know which pixels to alter to remove the red eye.

   Note: ascending order == smallest to largest

   Each score is associated with a position, when you sort the scores, you must
   also move the positions accordingly.

   Implementing Parallel Radix Sort with CUDA
   ==========================================

   The basic idea is to construct a histogram on each pass of how many of each
   "digit" there are.   Then we scan this histogram so that we know where to put
   the output of each digit.  For example, the first 1 must come after all the
   0s so we have to know how many 0s there are to be able to start moving 1s
   into the correct position.

   1) Histogram of the number of occurrences of each digit
   2) Exclusive Prefix Sum of Histogram
   3) Determine relative offset of each digit
        For example [0 0 1 1 0 0 1]
                ->  [0 1 0 1 2 3 2]
   4) Combine the results of steps 2 & 3 to determine the final
      output location for each element and move it there

   LSB Radix sort is an out-of-place sort and you will need to ping-pong values
   between the input and output buffers we have provided.  Make sure the final
   sorted results end up in the output buffer!  Hint: You may need to do a copy
   at the end.

 */

__global__
void findkernel(unsigned int expo,
                      unsigned int * add,
                      unsigned int* const in, 
                      const int num) {  
    int val = threadIdx.x + blockDim.x;
    if(val*blockIdx.x >= num)
        return;
	
    
    int out = ((in[val*blockIdx.x] & (1<<expo)) == (1<<expo)) ? 1 : 0;
    if(out) 
         atomicAdd(&add[1], 1);
    else
         atomicAdd(&add[0], 1);
}

__global__ void scanex(unsigned int expo,
                    unsigned int const * inputs,
                    unsigned int * output,
                    const int size,
                    unsigned int radix,
                    unsigned int numt) {
    int cen = threadIdx.x + numt * radix;
    int block = numt*radix;

    if(cen >= size)
        return;
      unsigned int val = 0;
    if(cen > 0)
        val = ((inputs[mid-1] & (1<<expo))  == (1<<expo)) ? 1 : 0;
    else
        val = 0;

    output[cen] = val;
    
    __syncthreads();
    
    for(int i = 1; i <= numt; i *= 2) {
        int spot = cen - i; 
         
        if(spot >= 0 && spot >=  numt*radix)
             val = output[spot];
        __syncthreads();
        if(spot >= 0 && spot >= numt*radix)
            output[cen] += val;
        __syncthreads();
    }
    if(radix > 0)
        output[cen] += output[base*numt - 1];
}



__global__ void mvker(
    unsigned int expo,
    unsigned int* const d_inputVals,
    unsigned int* const d_inputPos,
    unsigned int* d_outputVals,
    unsigned int* d_outputPos,
    unsigned int* d_outputMove,
    unsigned int* const d_scanned,
    unsigned int  one_pos,
    const size_t numElems) {
    
    int idx = threadIdx.x + blockDim.x ;
    if(idx*blockIdx.x >= numElems)
        return;
    idx *= blockIdx.x;
    unsigned int find=0,base=0;
    unsigned int o= 1;
    if( ( d_inputVals[idx] & (o<<expo)) == (1<<expo)) {
        find = d_scanned[idx]; 
        base = one_pos;
    } else {
        find = (idx) - d_scanned[idx];
        base = 0;
    }
    
    d_outputMove[idx] = base+find;
    d_outputPos[base+find]  = d_inputPos[idx];//d_inputPos[0];
    d_outputVals[base+find] = d_inputVals[idx];//base+scan;//d_inputVals[0];
    
}

int debug = 1;
void arraybug(char* name, int l, unsigned int * in, int size) {
    
   unsigned int arr[l];
   unsigned int arr2[size];

    if(debug) {
        
    
    checkCudaErrors(cudaMemcpy(&arr, in, l*sizeof(unsigned int), cudaMemcpyDeviceToHost));
    checkCudaErrors(cudaMemcpy(&arr2, in, numElems*sizeof(unsigned int), cudaMemcpyDeviceToHost));
    cudaDeviceSynchronize(); checkCudaErrors(cudaGetLastError());

   unsigned int vmax = 0,vmin = 1000000;
 
    for(int i = 0; i < size; i++) {
        if(arr2[i] < vmin)
            vmin = arr2[i];
         if(arr2[i] > vmax)
            vmax = arr2[i];
    }
	}
}


void your_sort(unsigned int* const d_inputVals,
               unsigned int* const d_inputPos,
               unsigned int* const d_outputVals,
               unsigned int* const d_outputPos,
               const size_t numElems)
{
    unsigned int* d_bins,* d_scanned,* d_moved;
    unsigned int  h_bins[2];
    const size_t histo_size = 2*sizeof(unsigned int);
    const size_t arr_size   = numElems*sizeof(unsigned int);

    checkCudaErrors(cudaMalloc(&d_bins, histo_size));
    checkCudaErrors(cudaMalloc(&d_scanned, arr_size));
    checkCudaErrors(cudaMalloc(&d_moved, arr_size));
	dim3 thread_dim(1024 );
	int temp = (int)ceil((float)numElems/(float)thread_dim.x)+1;
    dim3 hist_block_dim(temp);
	arraybug("input", 100, d_inputVals, numElems);

   for(unsigned int expo = 0; expo < 32; expo++) {
        unsigned int one = 1;
        checkCudaErrors(cudaMemset(d_bins, 0, histo_size));
        checkCudaErrors(cudaMemset(d_scanned, 0, arr_size));
        checkCudaErrors(cudaMemset(d_outputVals, 0, arr_size));
        checkCudaErrors(cudaMemset(d_outputPos, 0, arr_size));
        
        findkernel<<<hist_block_dim, thread_dim>>>(expo, d_bins, d_inputVals, numElems);
        cudaDeviceSynchronize(); checkCudaErrors(cudaGetLastError());
       
        checkCudaErrors(cudaMemcpy(&h_bins, d_bins, histo_size, cudaMemcpyDeviceToHost));
  	temp = (int)ceil((float)numElems/(float)thread_dim.x)+1;
      
        
        for(int i = 0; i < temp; i++) {
            scanex<<<dim3(1), thread_dim>>>(expo,d_inputVals,d_scanned,numElems,i, thread_dim.x);
            cudaDeviceSynchronize(); checkCudaErrors(cudaGetLastError());
        
        }        
        mvker<<<hist_block_dim, thread_dim>>>(expo,d_inputVals,d_inputPos,d_outputVals,d_outputPos,d_moved,d_scanned,h_bins[0],numElems);
        cudaDeviceSynchronize(); checkCudaErrors(cudaGetLastError());
        checkCudaErrors(cudaMemcpy(d_inputVals, d_outputVals, arr_size, cudaMemcpyDeviceToDevice));
        checkCudaErrors(cudaMemcpy(d_inputPos, d_outputPos, arr_size, cudaMemcpyDeviceToDevice));

        cudaDeviceSynchronize(); checkCudaErrors(cudaGetLastError());
       
        
        
    }
}

