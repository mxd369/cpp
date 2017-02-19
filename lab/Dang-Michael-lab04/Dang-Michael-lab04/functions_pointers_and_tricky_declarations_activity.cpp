#include <iostream>
using namespace std;
void divBy2(int & n) {
	n = n / 2;
} // divBy2

void divBy2(int * np) {
	*np = *np / 2;
} // divBy2

int main() {
	int x = 44;
	divBy2(x);
	cout << x << endl;
	divBy2(&x); // line 16
	cout << x << endl;
	return EXIT_SUCCESS;
} // main
