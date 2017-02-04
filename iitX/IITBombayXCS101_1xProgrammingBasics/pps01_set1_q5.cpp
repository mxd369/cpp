/*

Convert 219 into binary, octal and hexadecimal number systems

demonstrate how to output integers in octal, decimal, and hexadecimal.
We begin by declaring an array of ints and assigning the entries the
values of six literals given in octal, decimal, and hexadecimal.
We note that the compiler allows us to use either uppercase or
lowercase letters in our hexadecimal representations.
After the assignments, we loop over the array of six entries and
output each one in octal, decimal, and hexadecimal.

*/
#include <iostream>
using namespace std;

void PrintBinary(int iInteger) {
	cout << "Bin = ";
	for (int i = 31; i >=0; --i) {
		cout << ((iInteger >> i ) % 2);
	}
	cout << endl;
}

void PrintOctal(int iInteger) {
	cout << "Oct = ";
	for (int i = 10; i >= 0; --i) {
		int iOctDigit = ((iInteger >> (3*i)) % 8);
		cout  << "  " << iOctDigit;
	}
	cout << endl;
}

void PrintHexadecimal(int iInteger) {
	cout << "Hex = ";
	for (int i = 7; i >= 0; --i) {
		int iHexDigit = ((iInteger >> (4*i)) % 16);
		if (iHexDigit < 10) {
			cout << "  " << iHexDigit;
		} else {
			cout << "  " << (char)('A' + (iHexDigit - 10));
		}
	}
	cout << endl;
}


int main()
{
    int iMyNumber = 13;
	
	PrintBinary(iMyNumber);
	PrintOctal(iMyNumber);
	PrintHexadecimal(iMyNumber);
	cout << "Oct = " << oct << iMyNumber << endl;
	cout << "Hex = " << hex << iMyNumber << endl;
	cout << "Dec = " << dec << iMyNumber << endl;
	cout << "Dec = " << iMyNumber << endl;
	
	return 0;
}

