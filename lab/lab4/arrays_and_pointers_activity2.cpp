#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;

int main() {
	int x = 10;
	int * px = &x;
	int a [10] = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
	int b [5] = {1000, 1000, 1000, 1000, 1000};
	int * p1 = a;
	int * p2 = b;
	int (* parray)[10] = &a;	// line 17
	int * ap1 [3];
	ap1[0] = &x;
	ap1[1] = p1;
	ap1[2] = b;
	int (* ap2 [2]) [10];
	ap2[0] = &a;			// line 25
	ap2[1] = parray;
	return EXIT_SUCCESS;
}// main
