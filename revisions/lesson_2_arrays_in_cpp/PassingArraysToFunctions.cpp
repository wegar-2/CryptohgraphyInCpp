#include <iostream>
#include "FunctionsOfArrays.hpp"


int main() {
	
	// =============== I. PREPARE ARRAYS ===============
	unsigned int N = 4;
	// 1. prepare a stack array
	int StackArray[N];
	for (int i = 0; i < N; i++) {
		StackArray[i] = (i + 1) * i + 2;
	}	
	// 2. prepare an array of pointers
	int *ArrayOfPointers[N];
	for (int i = 0; i < N; i++) {
		ArrayOfPointers[N] = new int((i + 1) * i + 3);
		
	}	
	// 3. prepare a heap array
	int *HeapArray = new int[N];
	for (int i = 0; i < N; i++) {
		HeapArray[N] = (i + 1) * i + 4;
		
	}

	// =============== II. PASS ARRAYS TO FUNCTIONS ===============	
	// 1. pass the stack array
	SumStackArrayElements(StackArray, &N);	
	
	// 2. pass the array of pointers
	SumPointedAtArrayElements(ArrayOfPointers, &N);
	
	// 3. pass the heap array
	SumHeapArrayElements(HeapArray, &N);

	
}


