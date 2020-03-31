#include <iostream>
#include "TemplateFunctions.hpp"


int main()
{
    // 1. stack arrays
    int IntStackArray[3] = {3, 32, 1};
    double DoubleStackArray[3] = {1.33, 32.1, 5.66};
    PrintStackArray<int>(IntStackArray, 3);
    PrintStackArray<double>(DoubleStackArray, 3);

    // 2. array of pointers
    // 2.1. integers
    int* ArrayOfIntPointers[3];
    ArrayOfIntPointers[0] = new int(32);
    ArrayOfIntPointers[1] = new int(333);
    ArrayOfIntPointers[2] = new int(123);
    PrintArrayOfPointers<int>(ArrayOfIntPointers, 3);
    // 2.2. doubles
    double* ArrayOfDoublePointers[2];
    ArrayOfDoublePointers[0] = new double(123.332);
    ArrayOfDoublePointers[1] = new double(32.12);
    PrintArrayOfPointers<double>(ArrayOfDoublePointers, 2);

    // 3. heap array
    // 3.1. heap array of integers
    int* IntHeapArray = new int[3];
    IntHeapArray[0] = 23;
    IntHeapArray[1] = 333;
    IntHeapArray[2] = 322;
    PrintHeapArray<int>(IntHeapArray, 3);
    // 3.2. heap array of doubles
    double* DoubleHeapArray = new double[3];
    DoubleHeapArray[0] = 23.32;
    DoubleHeapArray[1] = 333.32;
    DoubleHeapArray[2] = 322.565;
    PrintHeapArray<double>(DoubleHeapArray, 3);

    return 0;
}
