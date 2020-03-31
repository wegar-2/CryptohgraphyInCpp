#include <iostream>
#include "Permutation.hpp"


/* -------------------------------------------------------------------------- */
/* ------------------ CLASS CONSTRUCTORS AND DESTRUCTOR  -------------------- */

Permutation::Permutation() {
    std::cout << "Class Permutation default constructor called; " <<
    "creating identity permutation of size 6!" << std::endl;
    PermutationSize = 5;
    pPermutationArray = new unsigned int[PermutationSize];
    for (unsigned int k = 0; k < 5; ++k) {
        pPermutationArray[k] = k + 1;
    }
    //FlagIsDecomposed = false;
    std::cout << "Printing the permutation created by the default constructor: "
    << std::endl;
}

Permutation::Permutation(unsigned int PermutationSize, unsigned int* pPermutationArray) {
    std::cout << "Called parametrized class Permutation constructor with " <<
    "parameters: " << std::endl;
    std::cout << "size = " << PermutationSize << std::endl;
    std::cout << "Permutation array: " << std::endl;

    this->PermutationSize = PermutationSize;
    this->pPermutationArray = new unsigned int [PermutationSize];
    for (unsigned int i = 0; i < PermutationSize; ++i) {
        this->pPermutationArray[i] = pPermutationArray[i];
    }
    std::cout << "Printing the permutation created by the parametrized constructor: "
    << std::endl;
    this->PrintPermutation();

}

Permutation::~Permutation() {
    std::cout << "Class Permutation destructor has been called..." << std::endl;
    delete [] pPermutationArray;
}

Permutation::Permutation(const Permutation& rhs) {
    std::cout << "Class Permutation copy constructor called..." << std::endl;
    pPermutationArray = new unsigned int [rhs.GetPermutationSize()];
    for (unsigned int i = 0; i < rhs.GetPermutationSize(); ++i) {
        pPermutationArray[i] = rhs.GetPermutationElement(i+1);
    }
    std::cout << "Class Permutation copy constructor completed successfully. " <<
    std::endl;
}

/* -------------------------------------------------------------------------- */
/* ---------------------------- CLASS GETTERS  ------------------------------ */
unsigned int Permutation::GetPermutationSize() const {
    return PermutationSize;
}

unsigned int Permutation::GetPermutationElement(unsigned int ElementPointer)
const {
    if (ElementPointer == 0 || ElementPointer > PermutationSize) {
        std::cout << "Wrong index inside GetPermutationElement; returning zero..."
        << std::endl;
        return 0;
    }
    return pPermutationArray[ElementPointer-1];
}

/* -------------------------------------------------------------------------- */
/* ---------------------------- CLASS OPERATORS  ---------------------------- */

/* -------------------------------------------------------------------------- */
/* ---------------------------- OTHER FUNCTIONS  ---------------------------- */
void Permutation::PrintPermutation() const {
    std::cout << "\n\n\nPrinting a permutation: " << std::endl;
    // first line
    std::cout << "(";
    for (unsigned int i = 0; i < PermutationSize; ++i) {
        if (i != PermutationSize - 1) {
            std::cout << i+1 << ", ";
        } else {
            std::cout << i+1;
        }
    }
    std::cout << ")";
    // second line
    std::cout << std::endl;
    std::cout << "(";
    for (unsigned int i = 0; i < PermutationSize; ++i) {
        if (i != PermutationSize - 1) {
            std::cout << pPermutationArray[i] << ", ";
        } else {
            std::cout << pPermutationArray[i];
        }
    }
    std::cout << ")";
    std::cout << std::endl;
    std::cout << "Done printing a permutation. \n" << std::endl;
}
