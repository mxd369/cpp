#include <iostream>
using namespace std;
int main()
{
	int a = 1, b = 0, c = 1, val1, val2, val3;
	val1 = a && !(b && c);
	val2 = !(a && b) || c ;
	val3 = a && !(b || c) ;
	cout << val1 << val2 << val3 ;
	return 0;
}
