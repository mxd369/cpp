/*
8. Write a program to test an integer value to determine if it is odd or even.
As always, make sure your output is clear and complete.
In other words, don't just output "yes" or "no."
Your Output should stand alone, like "The value 4 is an even number."
Hint: See the remainder (modulo) operator in §3.4.
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	int x = 0;
    cout<<"Enter an integer to be determined: ";
	cin>>x;
	if(x % 2 == 0)
	{
		cout<<"The value "<<x<<" is an even number\n";
	}
	else
	{
		cout<<"The value "<<x<<" is an odd number\n";
	}
}