#include <bits/stdc++.h>
#include<cilk/cilk.h>
#include<iostream>
#include<stdlib.h>
#include <chrono>
using namespace std::chrono;
using namespace std;

int sort(int A[], int left, int right)
{
	int p = A[right],i;
	int idx = left - 1;
	int temp = 0;
	for (i = left; i < right ; i++)
	{
		if (A[i] < p)
		{
			temp  = A[idx+1];
			A[idx+1] = A[i];
			A[i] = temp;
			idx += 1;
		}
	}
	idx+=1;
	temp  = A[idx];
	A[idx] = A[right];
	A[right] = temp;
	return idx;
}


void divide(int A[], int left, int right)
{
	if (left < right)
	{
		int middle = sort(A, left, right);
		cilk_spawn divide(A, left,middle - 1);
		divide(A, middle + 1, right);
		cilk_sync;
	}
}

int main()
{
	int size;
	cout << "size : ";
	cin>>size;
	int A[size] ;
	for(int i = 0; i<size; i++)
		A[i] = (rand() % (size*5)) + 1;
	divide(A, 0, size - 1);
	for(int i = 0; i < size; i++)
		cout << A[i] << " ";
	cout << endl;
	return 0;
}
