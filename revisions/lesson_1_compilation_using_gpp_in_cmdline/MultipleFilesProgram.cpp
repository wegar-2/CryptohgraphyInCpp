#include <iostream>
#include "HelperFunctions.hpp"

int main() {
	
	// define the variable needed over the course of program run
	double x;
	double y;	
	double result;
	unsigned int unint_loop_controller = 0;
	unsigned int loop_counter = 0;
	unsigned int which_operation;

	while (true) {
		std::cout << "Do you want to perform a simple to-arguments operation? Type in any non-zero integer to continue or type in zero to exit!" << std::endl;
		std::cin >> unint_loop_controller;
		
		if (unint_loop_controller != 0) {
			loop_counter += 1;
		}
		if (unint_loop_controller == 0) {
			break;
		} 
		std::cout << "Executing operation number " << loop_counter << std::endl;
		
		
		// take in arguments from the user
		std::cout << "Pass in first argument: " << std::endl;
		std::cin >> x;
		std::cout << "Pass in the second argument: " << std::endl;
		std::cin >> y;
		std::cout << "\t\tx = " << x << std::endl;
		std::cout << "\t\ty = " << y << std::endl;
	
		// take in the name of the operation to perform from the user
		std::cout << "Type in a nonnegative integer to select operation * you want to on 'a' and 'b' (this program returns results of the operation a * b) :" << std::endl;
		std::cout << "\t\t 0 --- addition; " << std::endl;
		std::cout << "\t\t 1 --- subtraction; " << std::endl;
		std::cout << "\t\t 2 --- multiplication; " << std::endl;
		std::cout << "\t\t any other number --- division; " << std::endl;
		std::cin >> which_operation;
		
		// perform the operation
		if (which_operation == 0) {
			result = AddTwoDoubles(x, y);
		}
		else if (which_operation == 1) {
			result = SubtractTwoDoubles(x, y);
		}
		else if (which_operation == 2) {
			result = MultiplyTwoDoubles(x, y);
		}
		else {
			result = DivideTwoDoubles(x, y);
		}
		// print the results to the console
		std::cout << "operation result: " << result << std::endl;			
		
	}
	
	std::cout << "Exiting the calculator...\n\n\n\n";
			
	return 0;
}