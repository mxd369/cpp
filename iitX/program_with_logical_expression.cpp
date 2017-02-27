#include <iostream>
using namespace std;
int main()
	
{
	int A, B, C;
	bool isALargest;

	cout << "Give 3 numbers: ";
	cin >> A >> B >> C;
	isALargest = ((A>=B)&&(A>=C));
	cout << "Is A the largest:";
	cout << isALargest;

	return 0;
}