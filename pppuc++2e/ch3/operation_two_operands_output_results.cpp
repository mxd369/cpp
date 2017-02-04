/*
10. Write a program that takes an operation followed by two operands
and outputs the result.
For example:
+ 100 3.14
• 45

Read the operation into a string called operation and use an if-statement
to figure out which
operation the user wants, for example, if (operation=="+").
Read the operands into variables of type double.
Implement this for operations called +, - , *, /, plus , minus, mul,
and div with their obvious meanings.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	
	string operation = " ";
	cout<<"please enter an operation, pick either *,-,*,/: \n";
	cin>>operation;
	double operand1 = 0;
	double operand2 = 0;
	cout<<"please enter two operands such as 10 and 8 \n";
	cin>>operand1>>operand2;
	cout<<"You entered for operand1: "<<operand1<<", you entered for operand2: "<<operand2<<'\n';
	if (operation == "+"){
		cout<<operand1+operand2<<'\n';
	}
	if (operation == "-"){
		cout<<operand1-operand2<<'\n';
	}
	if (operation == "*"){
		cout<<operand1*operand2<<'\n';
	}
	if (operation == "/"){
		cout<<operand1/operand2<<'\n';
	}
}