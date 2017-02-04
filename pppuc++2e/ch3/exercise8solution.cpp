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
	int val = 0;
	cout << "Please enter an integer: ";
	cin >> val;
	if (!cin) cout<<"something went bad with the read\n";
	string res = "even";
	if (val%2) res = "odd"; // a number is even if it isi 0 modulo 2 and odd otherwise
	
	cout << "The value " << val << " is an " << res << " number\n";
}

/*
	Note the technique of picking a default value for the result ("even") and changing it only if needed.
	The alternative would be to use a conditional expression and write
		string res = (val%2) ? "even" : "odd";

	Did I get it right? Does it work for negative numbers? For 0?

	It would be less tedious to check the program if it had a loop so that we could read and check
	several numbers in one run.
*/