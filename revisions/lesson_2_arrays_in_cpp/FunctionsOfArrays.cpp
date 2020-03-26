#include <iostream>


// function that takes in a stack array
int SumStackArrayElements(int* ArrayOfIntegers, unsigned int* pArrayLength) {
	int sum = 0;	
	for (int i = 0; i < *pArrayLength; i++) {
		sum += ArrayOfIntegers[i];
	}	
	return sum;
}


// function that takes in array of pointers
int SumPointedAtArrayElements(int** ArrayOfIntegerPointers, unsigned int* pArrayLength) {
	int sum = 0;	
	for (int i = 0; i < *pArrayLength; i++) {
		sum += *ArrayOfIntegerPointers[i];
	}	
	return sum;	
}

// function that takes in pointer to heap array
int SumHeapArrayElements(int* HeapArray, unsigned int* pArrayLength) {
	int sum = 0;	
	for (int i = 0; i < *pArrayLength; i++) {
		sum += HeapArray[i];
	}	
	return sum;		
}


