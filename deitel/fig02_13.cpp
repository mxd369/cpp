// Fig. 2.13: fig02_13.cpp
// comparing integers using if statements, relational operators and equality operators.
#include <iostream> // enables program to perform input and output

using std::cout;// program uses cout
using std::cin; // program uses cin
using std::endl;// program uses endl

// function main begins program execution
int main() {
	// declare 2 integers variables to be compared
	int number1{0}; // first integer declared and intialized to 0
	int number2{0}; // second integer declared and intialized to 0

	cout << "Enter two integers to compare: "; // prompt user for data
	cin >> number1 >> number2; // read two integers from user

	if (number1 == number2) {
		cout << number1 << " == " << number2 << endl;
	}

	if (number1 != number2) {
		cout << number1 << " != " << number2 << endl;
	}

	if (number1 < number2){
		cout << number1 << " < " << number2 << endl;
	}

	if (number1 > number2){
		cout << number1 << " > " << number2 << endl;
	}

	if (number1 <= number2){
		cout << number1 << " <= " << number2 << endl;
	}

	if (number1 >= number2){
		cout << number1 << " >= " << number2 << endl;
	}
} // end function main