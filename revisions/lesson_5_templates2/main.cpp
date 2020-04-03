#include <iostream>
#include "TemplateFunctions.hpp"
#include "TemplateClasses.hpp"
#include "HelperFunctions.hpp"




int main()
{

	/* ------------------------------------------------------------------- */
	/* ------------------------------------------------------------------- */
	/* ------------------------------------------------------------------- */

    /* ========== 1. Stack Arrays ========== */
    // 1.1. integer arrays
	int IntStackArray[20];
	for (int i = 0; i < 20; ++i) {
		IntStackArray[i] = i + 12;
	}
	PrintStackArray<int>(IntStackArray, 20);
	
    // 1.2. double array
	double DoubleStackArray[20];
	for (int i = 0; i < 20; ++i) {
		DoubleStackArray[i] = 0.64 + 12.23;
	}
	PrintStackArray<double>(DoubleStackArray, 20);

    /* ========== 2. Arrays of pointers ========== */
	// 2.1. pointers to integers
	int* IntPointersArray[10];
	for (int i = 0; i < 10; ++i) {
		IntPointersArray[i] = new int (i+1);
	}
	// 2.2. pointers to doubles
	double* DoublePointersArray[10];
	for (int i = 0; i < 10; ++i) {
		DoublePointersArray[i] = new double (0.993 + 1.22);
	}	
	// 2.3. tidy up the memory
	for (int i = 0; i < 10; ++i) {
		delete DoublePointersArray[i];
		DoublePointersArray[i] = 0;
	}


    /* ========== 3. Heap Arrays ========== */
	// 3.1. integer array
	int* IntHeapArray = new int[20];
	for (int i = 0; i < 20; ++i) {
		IntHeapArray[i] = i + 23;
	}
	PrintHeapArray<int>(IntHeapArray, 20);
	
	// 3.2. doubles array
	double* DoubleHeapArray = new double[20];
	for (int i = 0; i < 20; ++i) {
		DoubleHeapArray[i] = 0.64 + 12.23;
	}
	PrintHeapArray<double>(DoubleHeapArray, 20);

	// 3.3. tidy up the heap arrays
	delete [] IntHeapArray;
	delete [] DoubleHeapArray;
	
	
	/* ------------------------------------------------------------------- */
	/* ------------------------------------------------------------------- */
	/* ------------------------------------------------------------------- */
	unsigned int MyArrayLen = 7;
	int* TestIntHeapArray = MakeHeapArray<int>(MyArrayLen);	
	double* TestDoubleHeapArray = MakeHeapArray<double>(MyArrayLen);
	// print the created arrays
	PrintHeapArray<int>(TestIntHeapArray, MyArrayLen);
	PrintHeapArray<double>(TestDoubleHeapArray, MyArrayLen);
		
	
	
	/* ------------------------------------------------------------------- */
	/* ------------------------------------------------------------------- */
	/* ------------------------------------------------------------------- */
	


    return 0;
}
