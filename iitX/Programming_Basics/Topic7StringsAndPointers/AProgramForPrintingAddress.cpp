#include <iostream>
using namespace std;
int main()
{
	int a;
	float b;
	char c;

	int * ptrA;
	float * ptrB;
	char * ptrC;

	ptrA = &a;  cout << "Address of a is: " << ptrA << endl;
	ptrB = &b;  cout << "Address of b is: " << ptrB << endl;
	ptrC = &c;  cout << "Address of c is: " << ptrC << endl;

	return 0;
}