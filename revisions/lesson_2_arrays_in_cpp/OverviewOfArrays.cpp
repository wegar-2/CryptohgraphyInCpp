#include <iostream>

int main() {
	
	// ========== 1. sample stack array ==========
	// 1.1. create the array
	int StackArray[10];
	for (int i = 0; i < 10; i++) {
		
	}
	// 1.2. print the array
	std::cout << "Printing stack array: " << std::endl;
	for (int i = 0; i < 10; i++) {
		std::cout << "\t\t\tStackArray[" << i << "] = " << StackArray[i] << std::endl;
	}
	
	// ========== 2. sample array of pointer ==========
	// 2.1. create the array
	int* ArrayOfPointers[20];
	for (int i = 0; i < 20; i++) {
		ArrayOfPointers[i] = new int((i+1)^2);
	}
	// 2.2. print the values pointed at by the array members
	for (int i = 0; i < 20; i++) {
		std::cout << "\t\t\tArrayOfPointers[" << i << "] = " << ArrayOfPointers[i] << std::endl;
		std::cout << "\t\t\t*ArrayOfPointers[" << i << "] = " << *ArrayOfPointers[i] << std::endl;
	}
	// 2.3. tidy up the memory!
	for (int i = 0; i < 20; i++) {
		delete ArrayOfPointers[i];
	}	
	
	// ========== 3. sample heap array ==========
	// 3.1. create the heap array
	int* PointerToHeapArray = new int[30];
	for (int i = 0; i < 30; i++) {
		PointerToHeapArray[i] = i + 123;
	}
	// 3.2. print the heap array
	for (int i = 0; i < 30; i++) {
		std::cout << "\t\t\tPointerToHeapArray[" << i << "] = " << PointerToHeapArray[i] << std::endl;
		std::cout << "\t\t\t*PointerToHeapArray[" << i << "] = " << &PointerToHeapArray[i] << std::endl;
	}	
	// 3.3. remove the heap array
	delete [] PointerToHeapArray;
	
	
	return(0);
}
