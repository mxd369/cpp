#include <iostream>
using namespace std;
int main()
{
	int a = 0, b = 1, c = 0, val1, val2, val3;
	val1 = !(a || b || c);       // not 0 or 1 or 0  = ?
	val2 = a || b && c;          // 0 or 1, AND 0    = ?
	val3 = !(a && b || c);       // not 0 AND 1 or 0 = ?
	cout << val1 << val2 << val3;// ? ? ?
	return 0;
}
