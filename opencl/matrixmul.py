import pyopencl as cl
import pyopencl.array  
import numpy as np

	
sz = int(input("size : "))
inA = np.random.randint(0,10,(sz, sz)).astype(np.float32)



print(inA)

context = cl.create_some_context()
inputQueue = cl.CommandQueue(context)


inAbuf = cl.array.to_device(inputQueue, inA)
inBbuf = cl.array.to_device(inputQueue, np.random.randint(0,10,(sz, sz)).astype(np.float32))
outCbuf = cl.array.to_device(inputQueue, np.zeros([sz, sz], dtype = np.float32) )

print(inBbuf)
multiply = cl.Program(context, """
	__kernel void matrixop(const unsigned int rowno, __global float * A, __global float * B, __global float * C) {

	int row = get_global_id(1); 
	int col = get_global_id(0);

	for (int r = 0; r < rowno; r+=1)
		{
			C[row + rowno*col] += A[r + rowno*row] * B[col + rowno*r]; 
		}
	}
	""").build()

multiply.matrixop(inputQueue, inA.shape, None,np.int32(len(inA)) ,inAbuf.data, inBbuf.data, outCbuf.data)

print(outCbuf)


