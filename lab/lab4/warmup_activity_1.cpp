#include <iostream>
#include <cstdlib>
using std::cout;
using std::endl;
int main() {
	int integer1, * p1, ** p2;
	integer1 = 10; // line 11
	p1 = &integer1; // line 12
	p2 = &p1; // line 13
	cout << "integer1 = " << integer1 <<endl; // line 15
	cout << "p1 = " << p1 << endl; // line 16
	cout << "p2 = " << p2 << endl; // line 17
	return EXIT_SUCCESS;
} // main
