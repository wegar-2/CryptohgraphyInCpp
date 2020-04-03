#include <iostream>
#include "HelperFunctions.hpp"


// General version of the templated function MakeHeapArray
template <typename T1>
T1* MakeHeapArray(unsigned int ArrayLen) {
	std::cout << "Creating stack array of integers of length "<< ArrayLen << std::endl;
	// 
	if (ArrayLen == 0) {
		std::cout << "Received zero as the array length; creating 10-elements array! " << std::endl;
		ArrayLen = 10;
	}	
	// creating pointer to heap array
	T1* pArray = new T1[ArrayLen];
	
	return pArray;
}


// Specialization for int
template <>
int* MakeHeapArray<int>(unsigned int ArrayLen) {
	std::cout << "Creating stack array of integers of length "<< ArrayLen << std::endl;
	// 
	if (ArrayLen == 0) {
		std::cout << "Received zero as the array length; creating 10-elements array! " << std::endl;
		ArrayLen = 10;
	}	
	// creating pointer to heap array
	int* pArray = new int[ArrayLen];
	// populate the array using a simple algorithm
	for (unsigned int i = 0; i < ArrayLen; ++i) {
		pArray[i] = i % 7;
	}
	
	return pArray;
}



// Specialization for double
template <>
double* MakeHeapArray<double>(unsigned int ArrayLen) {
	std::cout << "Creating stack array of integers of length "<< ArrayLen << std::endl;
	// 
	if (ArrayLen == 0) {
		std::cout << "Received zero as the array length; creating 10-elements array! " << std::endl;
		ArrayLen = 10;
	}	
	// creating pointer to heap array
	double* pArray = new double[ArrayLen];
	// populate the array using a simple algorithm
	for (unsigned int i = 0; i < ArrayLen; ++i) {
		pArray[i] = i * 23.22;
	}
	
	return pArray;
}