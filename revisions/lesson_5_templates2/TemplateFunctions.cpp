#include <iostream>
#include "TemplateFunctions.hpp"

template <typename T1>
void PrintStackArray(T1* StackArray, unsigned int ArrayLen) {
    std::cout << "\n\n\nFunction PrintStackArray printing: " << std::endl;
    for (unsigned int i = 0; i < ArrayLen; ++i) {
        std::cout << "\t\t\tStackArray[" << i << "] = " <<
        StackArray[i] << std::endl;
    }
    std::cout << "Function PrintStackArray done printing. \n" << std::endl;
}

template <typename T1>
void PrintPointersArray(T1** PointersArray, unsigned int ArrayLen) {
    std::cout << "\n\n\nFunction PrintPointersArray printing: " << std::endl;
    for (unsigned int i = 0; i < ArrayLen; ++i) {
        std::cout << "\t\t\tPointersArray[" << i << "] = " <<
        PointersArray[i] << std::endl;
        std::cout << "\t\t\t*PointersArray[" << i << "] = " <<
        *PointersArray[i] << std::endl;
    }
    std::cout << "Function PrintPointersArray done printing. \n" << std::endl;
}

template <typename T1>
void PrintHeapArray(T1* HeapArray, unsigned int ArrayLen) {
    std::cout << "\n\n\nFunction PrintHeapArray printing: " << std::endl;
    for (unsigned int i = 0; i < ArrayLen; ++i) {
        std::cout << "\t\t\tHeapArray[" << i << "] = " <<
        HeapArray[i] << std::endl;
    }
    std::cout << "Function PrintHeapArray done printing. \n" << std::endl;
}



/* ========== Explicit instantions of the template functions ========== */
template void PrintStackArray<int>(int* StackArray, unsigned int ArrayLen);
template void PrintStackArray<double>(double* StackArray, unsigned int ArrayLen);

template void PrintPointersArray<int>(int** PointersArray, unsigned int ArrayLen);
template void PrintPointersArray<double>(double** PointersArray, unsigned int ArrayLen);

template void PrintHeapArray<int>(int* HeapArray, unsigned int ArrayLen);
template void PrintHeapArray<double>(double* HeapArray, unsigned int ArrayLen);
