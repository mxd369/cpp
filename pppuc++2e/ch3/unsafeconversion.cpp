#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	double d = 0;
	while (cin>>d) {    // repeat the statement below
		                // as long as we type in numbers
		int i = d;      // try to squeeze a double into an int
		char c = i;     // try to squeeze an int into a char
		int i2 = c;     // get the integer value of a character
		cout<<"d=="<<d            // the original double
			<<"i=="<<i            // converted to int
			<<"i2=="<<i2          // int value of char
			<<"char("<<c<<")\n";  // the char
	}
}