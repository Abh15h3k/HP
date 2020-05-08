#include<cilk/cilk.h>
#include<iostream>
#include<stdlib.h>
#include <chrono>
using namespace std::chrono;
using namespace std;

int main()
{
	int size = 128;
	for(int s=0; s<12;s++)
	{
			size = size*2;
			cout<< "size : "<< size << endl;
			int A[size] , B[size] , C[size];
			for(int i=0;i<size;i++)
			{
				A[i] = (rand() % size) + 1;
				B[i] = (rand() % size) + 1;
			}

			 auto start = high_resolution_clock::now();
			 for(int i=0;i<size;i++)
	 			C[i] = A[i] + B[i];
			 auto stop = high_resolution_clock::now();
			 auto duration = duration_cast<microseconds>(stop - start);
			 cout << "Time taken normal : " << duration.count() << endl;

			 start = high_resolution_clock::now();
			 cilk_for(int i=0;i<size;i++)
	 			C[i] = A[i] + B[i];
		 	 stop = high_resolution_clock::now();
			 duration = duration_cast<microseconds>(stop - start);
			 cout << "Time taken vector : " << duration.count() << endl;
		}
	return 0;
}
