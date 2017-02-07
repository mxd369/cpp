/*
For strings + means concatenation;
that is, when s1 and s2 are strings, s1+s2 is a string where the characters from s1 are followed by the characters from s2. For example, if s1 has the value "Hello" and s2 the value "World", then s1+s2 will have the value "HelloWorld". Comparison of strings is particularly useful:
*/
#include "std_lib_facilities.h"
using namespace std;

int main()
{
	cout << "Please enter two names\n";
	string first;
	string second;
	cin >> first >> second; // read two strings
	if (first == second) cout << "that's the same name twice\n";
	if (first < second)
		cout << first << " is alphabetically before " << second <<'\n';
	if (first > second)
		cout << first << " is alphabetically after " << second <<'\n';

	return 0;
}
