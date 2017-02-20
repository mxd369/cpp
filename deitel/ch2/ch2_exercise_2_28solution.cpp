/*
(Digits of an Integer) Write a program that inputs a five-digit integer, separates the integer into its digits and prints them separated by three spaces each. [Hint: Use the integer division and modulus operators.] For example, if the user types in 42339, the program should print:

4	2	3	3	9
*/
#include <iostream>
using namespace std;

int main(){
	int n;
	int digit1;
	int digit2;
	int digit3;
	int digit4;
	int digit5;

	cout << "Enter a five digit integer: " << endl;
	cin >> n;			// read data from user
	
	digit1 = n % 10;	// store last digit in digit 1

	n = n / 10;			// store n/10 value in n
	digit2 = n % 10;	// store last digit in digit2

	n = n / 10;			// store n/10 value in n
	digit3 = n % 10;	// store last digit in digit3

	n = n / 10;			// store n/10 value in n
	digit4 = n % 10;	// store last digit in digit4

	n = n / 10;			// store n/10 value in n
	digit5 = n % 10;	// store last digit in digit5

	// print digit5; digit4; digit3; digit2; digit1
	cout << digit5 << " " << digit4 << " " << digit3 << " " << digit2 << " " << digit1;

	return 0;
}
/*

*/