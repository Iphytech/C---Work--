#include <iostream>

int main(){
    //This calculator performs arithmetic operations and prints the results.
    int a, b; // We can declare multiple variables of the same type in the same line.

    std::cout << "CPP CALCULATOR" << std::endl << std::endl;

    std::cout << "Enter number a: ";
    std::cin >> a;

    std::cout << "Enter number b: ";
    std::cin >> b;

    int sum = a + b;
    std::cout << "Sum of " << a << " and " << b << " is " << sum << std::endl;

/*
    std::cout << "Sum of " << a << " and " << b << "is " << a + b << std::endl;
	is another way of printing the line above. */

    int subtraction = a - b;
    std::cout << "Subtracting " << b << " from " << a << " gives us " << subtraction << std::endl;

    //We can also subtract a from b, instead of doing the operation all over again we can use the variable subtraction again

	std::cout << "Subtracting " << a << " from " << b << " gives us " << -subtraction << std::endl;
	// This is the same as b - a, variables can be really handy ;)

	int multiplication = a * b;
	std::cout << a << " times " << b << " is " << multiplication << std::endl;

	int division = a / b;
	std::cout << a << " divided by " << b << " is " << division << std::endl;
	//The result of the division will be rounded down because we are working with integers only

	double division2 = (double)a/b;
	/*  At least one of the operands of the right side "=" must be of double type because c++ first performs the
        operations on the right side and stores the result in the most appropriate type, in this case integer, and
        then assigns the result to the left operand.
		Remember that an integer variable fits in a double variable.
		Other way of writing the operations above would be:

		double division 2 = a*1.0/b;
		Here 1.0 is a double variable. Since it's one of the operands the operation would produce a double result.
		This is not the same as casting, with casting we convert a value from one type to the other, here we introduced
		a new operand. */

	std::cout << a << " divide by " << b << " again is " << division2 << std::endl;

	division = (int)division2;
	std::cout << division2 << " cast into int or rounded down is " << division << std::endl; //Just to show what happens when casting double to int

	int remainder = a % b;
	std::cout << "Remainder of " << a << " divided by " << b << " is " << remainder << std::endl;

	std::cout << std::endl << "Calculations completed" << std::endl;
}
