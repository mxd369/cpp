#include <iostream>
#include <sstream>
using namespace std;
int main()
{
	// String stream
	stringstream ss; // stream without IO operation
	// read/write of string

	//how to format a string with string stream
	ss << 89 << " Hex: " << hex << 89 << " Oct: " << oct << 89;
	cout << ss.str() << endl; // 89 Hex: 59  Oct: 131

	int a, b, c;
	string s1;

	ss >> hex >> a; // Formatted Input works token by token. spaces, tabs, newlines
	ss >> s1; // s1: "Hex: "
	ss >> dec >> b; // passed as a decimal number and save to b, b==59

	ss.ignore(6);

	ss >> oct >> c; // c == 89

	// ostringstream -- formatted output
	// istringstream -- formatted input

}