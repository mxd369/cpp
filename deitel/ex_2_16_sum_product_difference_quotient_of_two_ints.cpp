// write a program that asks the user to enter two numbers,
// obtain the two numbers from the user and prints the sum, product, difference, and quotient of the two numbers.
#include <iostream>
int main(){
	int num1{0};
	int num2{0};
	int sum{0};
	int product{0};
	int difference{0};
	int quotient{0};
	std::cout << "Enter 2 numbers: " << std::endl;
	std::cin >> num1 >> num2;
	sum = num1 + num2;
	product = num1 * num2;
	difference = num1 - num2;
	quotient = num1 / num2;
	std::cout << "The sum is " << sum << std::endl;
	std::cout << "The product is " << product << std::endl;
	std::cout << "The difference is " << difference << std::endl;
	std::cout << "The quotient is " << quotient << std::endl;
	return 0;
}