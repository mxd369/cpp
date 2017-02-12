// https://www.programiz.com/cpp-programming/examples/even-odd
#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "Enter an integer: ";
	cin >> n;

	if ( n % 2 == 0 )
		cout << n << " is even." << endl;
	else
		cout << n << " is odd." << endl;

	return 0;
}
// max int: 2147483647