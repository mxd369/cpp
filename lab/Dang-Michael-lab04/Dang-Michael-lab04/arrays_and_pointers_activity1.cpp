#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;

int main() {

	int iarray [10], * p1, * p2;
	p1 = iarray;
	p2 = &iarray[0];

	for (int i = 0; i < 10; ++i) iarray[i] = i;
	for (int i = 0; i < 10; ++i) cout << *(p2 + i) << endl;

	return EXIT_SUCCESS;

} // main
	
