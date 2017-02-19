#include <iostream>
using namespace std;
int main() {
	int a [2] = {1, 2};
	int b [2] = {3, 4};

	// part (a)
	int * p1 = a;
	const int * p2 = a;
	const int * const p3 = a;

	// part (b)
	p1++;
	p2++;
	p3++;

	// part (c)
	a = b;
	a++;
	(*a)++;

	return EXIT_SUCCESS;
} // main