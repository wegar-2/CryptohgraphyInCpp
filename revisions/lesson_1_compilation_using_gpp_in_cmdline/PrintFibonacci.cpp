#include <iostream>

// declaration of the function that will be implemented underneath main()
unsigned int CalculateFibonacci(unsigned int n);

int main() {
	
	unsigned int userN; // variable to store user input
	unsigned int result;
	std::cout << "Type in the number of the Fibonacci sequence that you want to calculate (larger than 1, integer)... " << std::endl;
	std::cin >> userN;
	std::cout << "You have typed in: " << userN << std::endl;
	
	std::cout << "Running the calculation..." << std::endl;	
	result = CalculateFibonacci(userN);
	std::cout << userN << "-th element of the Fibonacci sequence is: " << result << std::endl;
	
	return 0;
}


unsigned int CalculateFibonacci(unsigned int n) {
	
	std::cout << "Executin function CalculateFibonacci for n = " << n << "..." << std::endl;
	
	if (n == 0) {
		return 0;
	} else if (n == 1) {
		return 0;
	} else if (n == 2) {
		return 1;
	} else {
		return (CalculateFibonacci(n-1) + CalculateFibonacci(n-2));
	}	
}
