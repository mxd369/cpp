// 3.4 Operations and operators
// In addition to specifying what values can be stored in a variable, the type of a variable determines what operations we can apply to it and what they mean.
#include "std_lib_facilities.h"
using namespace std;
int main(){
	int count;
	cin >> count;				// >> reads an integer into count
	string name;
	cin >> name;				// >> reads a string into name

	int c2 = count + 2; 		// + adds integers
	string s2 = name + " Jr. "; // + appends characters

	int c3 = count -2;			// - subtracts integers
	string s3 = name - " Jr. "; // error: = isn't defined for strings
	return 0;
}
/*
	
	


ch3_4_Operations_and_operators.cpp:15:19: error: invalid operands to binary expression
      ('string' (aka 'basic_string<char, char_traits<char>, allocator<char> >') and
      'const char *')
        string s3 = name - " Jr. "; // error: = isn't defined for strings

*/