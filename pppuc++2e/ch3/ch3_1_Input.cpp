// 3.1 Input
// read and write a first name
#include "std_lib_facilities.h"
using namespace std;
int main()
{
	//int age = 42;
	//represents an object of type int named age containing the integer value 42.

	// writes out a message encouraging the user to enter a first name.
	// message is typically called a prompt because it prompts the user to take an action.
	cout << "Please enter your first name (followed by 'enter'):\n";

	// define a variable of type string called first_name
	// A statement that introduces a new name into a program and sets aside memory for a variable is called a definition.
	string first_name;	// first_name is variable of type string

	// read input from the keyboard into that variable
	cin >> first_name;	// read characters into first_name

	// write out a greeting
	cout << "Hello, " << first_name << "!\n";
}