/*
Exercise 10: Write a program that takes an operation followed by
two operands and outputs the result. For example:
+ 100 3.14
* 4 5
Read the operation into a string called operation
and use an if-statement to figure out which operation the user wants.
For example, if (operation=="+").
Read the operands into variables of type double.
Implement this for operations called +, -, *, /, plus, minus, mul,
and div with their obvious meanings.
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string operation;
	double val1 = 0;      // first/leftmost operand
	double val2 = 0;      // second/right operand
	cout << "Please enter an operation (+, -, *, /, plus, minus, div) followed by two floating-point values separated by a space: ";
	
	while(cin >> operation >> val1 >> val2) {
		// we do the following as long as we get "good" input and then stop
		double res = 0;
		if (operation=="plus" || operation=="+") res = val1+val2;
		else if (operation=="minus" || operation=="-") res = val1-val2;
		else if (operation=="mul" || operation=="*") res = val1*val2;
		else if (operation=="div" || operation=="/") {
			if (val2==0) cout<<"Error: trying to divide by zero";
			res = val1/val2;
		}
		else cout<<"sorry: bad operator: ";
		
		cout << val1 << operation << val2 << " == " << res << '\n';
		cout << "Please try again: ";
	}
	cout << "exit because of bad input\n";
}

/*
	While testing, I found it tedious to keep re-starting the program to enter a new set of values,
	so I added the while-loop. I know that loops won't be explained in detail until Chapter 4, but
	we did show a while loop in Chapter 3 and anyway, you *know* about doing things repeatedly from
	everyday life so "keep doing this until you run out of inputs" is well known.

	It is always a good idea to be sure that a divisor isn't zero.
*/