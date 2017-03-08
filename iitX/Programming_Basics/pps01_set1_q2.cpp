/*

  i.    Use locations A, B;
 ii.    Output "Give A and B: ";
iii.    Input A; Input B;
 iv.    A = A + B;
  v.    B = A + B;
 vi.    Output "B is: ";
vii.    Output B;

*/
#include <iostream>
using namespace std;

int main()
{
	int A, B;
	cout << "Give A and B: " ;
	cin >> A >> B ;
	A = A + B;
	B = A + B;
	cout << "Output B is: " << B << '\n';
	return 0;
}

/*
Test

A = 5
B = 4

A = 5 + 4;
A is assigned 9
B = 9 + 4;
B is assigned 13;
Output B is 13
*/