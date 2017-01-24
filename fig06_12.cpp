// Fig. 6.12: fig06_12.cpp
// square function used to demonstrate the function
// call stack and activation records/
#include <iostream>
using namespace std;

int square(int);// prototype for function square

int main() {
	int a{10}; // value to square (local variable in main)

	cout << a << " squared: " << square(a) << endl; // display a squared 
}

// returns teh square of an integer
int square(int x) { // x is a local variable
	return x * x;	// calculate a square and return result
}