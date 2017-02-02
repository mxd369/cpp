/*
Write a program that asks the user to enter two integers, obtains the numbers from the user, then prints the larger number followed by the words "is larger."
If the numbers are equal, print the message "These numbers are equal."
*/
#include <iostream>
int main() {
	int num1{0};
	int num2{0};
	std::cout << "Enter two intergers: " << std::endl;
	std::cin >> num1 >> num2;
	if(num1 > num2){ std::cout << num1 << " is larger.\n"; } else if (num2 > num1) { std::cout << num2 << " is larger.\n"; } else if (num1 == num2) { std::cout << "These numbers are equal.";}
}