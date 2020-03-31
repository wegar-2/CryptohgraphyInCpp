#include <iostream>
#include "HelperFunctions.hpp"


void PrintStackArray(unsigned int* StackArray, unsigned int StackArrayLength) {
    std::cout << "\n\n\nPrinting a stack array: " << std::endl;
    for (unsigned int i = 0; i < StackArrayLength; ++i) {
        std::cout << "\t\tStackArray[" << i << "] = " << StackArray[i] <<
        std::endl;
    }
    std::cout << "Done printing stack array. \n" << std::endl;
}

void PrintPointersArray(unsigned int** PointersArray, unsigned int PointersArrayLength) {
    std::cout << "\n\n\nPrinting array of pointers: " << std::endl;
    for (unsigned int i = 0; i < PointersArrayLength; ++i) {
        std::cout << "\t\tPointersArray[" << i << "] = " << PointersArray[i] << std::endl;
        std::cout << "\t\*tPointersArray[" << i << "] = " << *PointersArray[i] << std::endl;
    }
    std::cout << "Done printing array of pointers. \n" << std::endl;
}

void PrintHeapArray(unsigned int* HeapArray, unsigned int HeapArrayLength) {
    std::cout << "Printing heap array: \n\n\n" << std::endl;
    for (unsigned int i = 0; i < HeapArrayLength; ++i) {
        std::cout << "HeapArray[" << i << "] = " << HeapArray[i] << std::endl;
    }
    std::cout << "Done printing heap array. \n" << std::endl;
}
