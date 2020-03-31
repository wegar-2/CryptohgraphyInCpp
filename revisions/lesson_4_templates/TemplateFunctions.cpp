#include "TemplateFunctions.hpp"
#include <iostream>

template <typename T1>
void PrintStackArray(T1* StackArray, unsigned int StackArrayLength) {
    std::cout << "Printing a stack array: " << std::endl;
    for (unsigned int i = 0; i < StackArrayLength; ++i) {
        std::cout << "\t\tStackArray[" << i << "] = " <<
        StackArray[i] << std::endl;
    }
    std::cout << "Done printing a stack array. " << std::endl;
}

template <typename T1>
void PrintArrayOfPointers(T1** ArrayOfPointers, unsigned int ArrayOfPointersLength) {
    std::cout << "Printing an array of pointers: " << std::endl;
    for (unsigned int i = 0; i < ArrayOfPointersLength; ++i) {
        std::cout << "\t\tArrayOfPointers[" << i << "] = " <<
        ArrayOfPointers[i] << std::endl;
        std::cout << "\t\t*ArrayOfPointers[" << i << "] = " <<
        *ArrayOfPointers[i] << std::endl;
    }
    std::cout << "Done printing an array of pointers. " << std::endl;
}

template <typename T1>
void PrintHeapArray(T1* HeapArray, unsigned int HeapArrayLength) {
    std::cout << "Printing a heap array: " << std::endl;
    for (unsigned int i = 0; i < HeapArrayLength; ++i) {
        std::cout << "\t\tHeapArray[" << i << "] = " <<
        HeapArray[i] << std::endl;
    }
    std::cout << "Done printing a heap array. " << std::endl;
}


// explicit instantiation of PrintStackArray
template void PrintStackArray<int>(int* StackArray, unsigned int StackArrayLength);
template void PrintStackArray<double>(double* StackArray, unsigned int StackArrayLength);

// explicit instantiation of PrintArrayOfPointers
template void PrintArrayOfPointers<int>(int** ArrayOfPointers, unsigned int ArrayOfPointersLength);
template void PrintArrayOfPointers<double>(double** ArrayOfPointers, unsigned int ArrayOfPointersLength);

// explicit instantiation of PrintHeapArray
template void PrintHeapArray<int>(int* HeapArray, unsigned int HeapArrayLength);
template void PrintHeapArray<double>(double* HeapArray, unsigned int HeapArrayLength);

