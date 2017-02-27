/*

Q2
  i.  Use locations A, B;
 ii.  Output "Give A and B: ";
iii.  Input A; Input B;
 iv.  A = B;
  v.  B = A * B;
 vi.  Output "B is: ";
vii.  Output B;
What should be the value typed by the user as input for location B,
so that the output produced is "B is: 361"?
*/
#include <iostream>
using namespace std;

int main()
{
    int A, B;
	cout << "Give A and B: ";
	cin >> A >> B;
	A = B;
	B = A * B;
	cout << "B is: ";
	cout << B;
	
	return 0;
}

