// Divide integer A by integer B and output the quotient Q
#include <iostream>
using namespace std;

int main()
{
	//declare variables
	int A,B,Q;
	//output request for input
	cout << "Give A and B" << endl;
	//retrieve and assign variables;
	cin >> A >> B;
	Q = A/B;
	//output results
	cout << "Quotient is:" << Q << endl;
	return 0;
}
