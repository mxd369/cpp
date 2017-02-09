#include "std_lib_facilities.h"
#include <sstream>
using namespace std;
int main()
{
	double str_to_double(string s);
	string s = " ";
	// if possible, convert characters in s to floating-point value
	{
		istringstream is {s}; // make a stream so that we can read from s
		double d;
		is >> d;
		if (!is) error("double format error: ", s);
		return d;
	}

	double d1 = str_to_double("12.4"); // testing
	double d2 = str_to_double("1.34e-3");
	double d3 = str_to_double("twelve point three"); // will call error()
}