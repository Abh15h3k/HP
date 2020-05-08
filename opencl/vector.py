
import pyopencl as cl  
import pyopencl.array  
import numpy as np 

clContext = cl.create_some_context()  
inputQueue = cl.CommandQueue(clContext)  


size = int(input("Enter size"))
InputA = cl.array.to_device(inputQueue, np.random.randint(0,size,size).astype(np.int32))
InputB = cl.array.to_device(inputQueue, np.random.randint(0,size,size).astype(np.int32))  
InputC = cl.array.to_device(inputQueue, np.random.randint(0,size,size).astype(np.int32))

vectorFunc = cl.Program(clContext, 
"""
__kernel void vectorAdd(__global const int *in_a, __global const int *in_b, __global int *in_c)
{
  in_c[get_global_id(0)] = in_a[get_global_id(0)] + in_b[get_global_id(0)];
}
""").build()


vectorFunc.vectorAdd(inputQueue, InputA.shape, None,InputA.data, InputB.data, InputC.data)

print(InputA)
print("  +  ")
print(InputB)
print("  =  ")
print(InputC)
