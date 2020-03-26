#include <iostream>

double AddTwoDoubles(double x, double y) {
	return x + y;
}

double SubtractTwoDoubles(double x, double y) {
	return x - y;
}

double MultiplyTwoDoubles(double x, double y) {
	return x * y;
}

double DivideTwoDoubles(double x, double y) {	
	if (y == 0) {
		std::cout << "Inside the DivideTwoDoubles: the divisor is zero! Returning 0 as the quotient!" << std::endl;
		return 0;
	} else {
		return x/y;
	}		
}