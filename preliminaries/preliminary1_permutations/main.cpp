#include <iostream>
#include "HelperFunctions.hpp"
#include "Permutation.hpp"



int main()
{
    // 1. stack array
    unsigned int StackArray[10];
    for (unsigned int i = 0; i < 10; ++i) {
        StackArray[i] = (i + 3)*2 + 1;
    }
    PrintStackArray(StackArray, 10);

    // 2. array of pointers
    unsigned int* PointersArray[10];
    for (unsigned int i = 0; i < 10; ++i) {
        PointersArray[i] = new unsigned int(i+123);
    }
    PrintPointersArray(PointersArray, 10);

    // 3. heap array
    unsigned int* HeapArray;
    HeapArray = new unsigned int [10];
    for (unsigned int i = 0; i < 10; ++i) {
        HeapArray[i] = i + 11;
    }
    PrintHeapArray(HeapArray, 10);


    // clean up the array of pointers and the heap array
    Permutation perm1 = Permutation();
    std::cout << perm1.GetPermutationElement(2) << std::endl;
    std::cout << "\n\n\n\n\n" << std::endl;

    unsigned int myarray[] = {3, 1, 4, 5, 2};
    Permutation perm2 = Permutation(5, myarray);

    return 0;
}
