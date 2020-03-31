#ifndef PERMUTATION_HPP
#define PERMUTATION_HPP

class Permutation {
public:
    // class constructors and destructors
    Permutation();
    Permutation(unsigned int PermutationSize, unsigned int* pPermutationArray);
    ~Permutation();
    Permutation(const Permutation& rhs);
    // getters
    // unsigned int GetPermutationArray() const;
    unsigned int GetPermutationSize() const;
    unsigned int GetPermutationElement(unsigned int ElementPointer) const;
    // operators overloading

    // other functions
    void PrintPermutation() const;
    unsigned int FindNumberOfCycles();
    void DecomposeIntoCycles();

private:
    static const unsigned int MaxSize = 10; // maximal size of the permutation
    // array to store the permutation
    unsigned int PermutationSize;
    unsigned int* pPermutationArray;
    //Permutation* pPermutationCyclesArray;
    //bool FlagIsDecomposed;
};

#endif // PERMUTATION_HPP
