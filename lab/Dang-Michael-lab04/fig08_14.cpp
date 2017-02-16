// Fig. 8.14: fig08_14.cpp
// sizeof operator used to determine standard data type sizes.
#include <iostream>
using namespace std;

int main() {
	char c;				// variable of type char
	short s;			// variable of type short
	int i;				// variable of type int
	long l;				// variable of type long
	long long ll;		// variable of type long long
	float f;			// variable of type float
	double d;			// variable of type double
	long double ld;		// variable of type long double
	int array[20];		// built-in array of int
	int* ptr{array};	// variable of type int *
	
	cout << "sizeof c            = " << sizeof c            << '\n';
	cout << "sizeof(char)        = " << sizeof(char)        << '\n';
	cout << "sizeof s            = " << sizeof s            << '\n';
	cout << "sizeof(short)       = " << sizeof(short)       << '\n';
	cout << "sizeof i            = " << sizeof i            << '\n';
	cout << "sizeof(int)         = " << sizeof(int)         << '\n';
	cout << "sizeof l            = " << sizeof l            << '\n';
	cout << "sizeof(long)        = " << sizeof(long)        << '\n';
	cout << "sizeof ll           = " << sizeof ll           << '\n';
	cout << "sizeof(long long)   = " << sizeof(long long)   << '\n';
	cout << "sizeof f            = " << sizeof f            << '\n';
	cout << "sizeof(float)       = " << sizeof(float)       << '\n';
	cout << "sizeof d            = " << sizeof d            << '\n';
	cout << "sizeof(double)      = " << sizeof(double)      << '\n';
	cout << "sizeof ld           = " << sizeof ld           << '\n';
	cout << "sizeof(long double) = " << sizeof(long double) << '\n';
	cout << "sizeof array        = " << sizeof array        << '\n';
	cout << "sizeof ptr          = " << sizeof ptr          << '\n';

	return 0;
}
/*
$ g++ -std=c++14 -c fig08_14.cpp
$ g++ -o fig08_14 fig08_14.o
$ ./fig08_14
sizeof c            = 1
sizeof(char)        = 1
sizeof s            = 2
sizeof(short)       = 2
sizeof i            = 4
sizeof(int)         = 4
sizeof l            = 8
sizeof(long)        = 8
sizeof ll           = 8
sizeof(long long)   = 8
sizeof f            = 4
sizeof(float)       = 4
sizeof d            = 8
sizeof(double)      = 8
sizeof ld           = 16
sizeof(long double) = 16
sizeof array        = 80
sizeof ptr          = 8
*/