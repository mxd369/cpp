/*
(Comparing Integers) Write a program that asks the user to enter two integers, obtains the numbers from the user, then prints the larger number followed by the words "is larger." If  numbers are equal, print the message "These numbers are equal."
*/
// Program that prints a Larger / Equal
#include <iostream> // Allows program to perform input & output
using std::cout; // program uses cout
using std::cin;  // program uses cin
using std::endl; // program uses endl


// function main begins program execution
int main(){
	int a;
	int b;
	cout << "Enter two numbers: ";// prompt user for data
	cin >> a >> b;// read in the two numbers

	if(a == b) // compare the two numbers
		cout << "These numbers are equal." << endl;

	if (a > b) // compare the two numbers
		cout << a << " is larger.";

	if (b > a) // compare the two numbers
		cout << b << "  is larger.";

	return 0; // indicate program executed successfully
}// end of function main
/*

*/