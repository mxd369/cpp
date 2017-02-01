// Fig. 2.5: fig02_05.cpp
// write a program with 3 variables/
// number1
// number2
// sum
// initialize these variables to 0
// prompt the user for the values of number1 and number2
// store these values in number1 and number2
// store the result of adding number1 and number 2 in the variable sum
// display sum to the user
#include <iostream> // enables the program to perform input and output
// Addition program that displays the sum of two integers.

// function main begins program execution
int main(){
	// declaring variables and initializing to 0
	int number1{0};
	int number2{0};
	int sum{0};

	std::cout << "Enter a value for int number1: ";
	std::cin >> number1;

	std::cout << "Enter a value for int number2: ";
	std::cin >> number2;

	sum = number1 + number2;
	std::cout << "The sum of number1 and number2 is " << sum << std::endl; 
}