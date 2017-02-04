/*
Exercise 8:
Write a program to test an integer value to determine if it is odd or even.
As always, make sure your output is clear and complete.
In other words, don't just output "yes" or "no".
Your output should stand alone, like ``The value 4 is an even number.
''Hint: see the Remainder (modulo) operator in 2.4.
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
int main()

{
	//initialize an int variable and set it equal to 0
	int val = 0;
	//prompt user for an integer
	cout << "Please enter an integer: ";
	//read in the integer and assign it to the variable val
	cin >> val;
	//display an error message if the read in is not compatible
	if (!cin) cout<<"something went bad with the read\n";
	//initialize a string variable for the message of 'odd' or 'even'
	string determinant = "even";
	// using the modulo operator 0 is even and odd is 2
	if (val%2) determinant = "odd";
	//output the result
	cout << val << " is an " << determinant << " number\n";
	
}