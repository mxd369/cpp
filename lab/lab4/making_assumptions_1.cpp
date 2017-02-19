#include <iostream>
using namespace std;
int main(){

	cout << sizeof(char) 	<< endl;
	cout << sizeof(char &) 	<< endl;
	cout << sizeof(char *) 	<< endl;
	cout << sizeof(short) 	<< endl;
	cout << sizeof(short &) << endl;
	cout << sizeof(short *) << endl;
	cout << sizeof(int)	<< endl;
	cout << sizeof(int &) 	<< endl;
	cout << sizeof(int *)	<< endl;
	cout << sizeof(long) 	<< endl;
	cout << sizeof(long &) 	<< endl;
	cout << sizeof(long *)  << endl;
	cout << sizeof(int **)  << endl;
	cout << sizeof(int ***) << endl;

	cout << "sizeof(char)    = " << sizeof(char) 	<< endl;
	cout << "sizeof(char &)  = " << sizeof(char &) 	<< endl;
	cout << "sizeof(char *)  = " << sizeof(char *) 	<< endl;
	cout << "sizeof(short)   = " << sizeof(short) 	<< endl;
	cout << "sizeof(short &) = " << sizeof(short &) << endl;
	cout << "sizeof(short *) = " << sizeof(short *) << endl;
	cout << "sizeof(int)     = " << sizeof(int)	<< endl;
	cout << "sizeof(int &)   = " << sizeof(int &) 	<< endl;
	cout << "sizeof(int *)   = " << sizeof(int *)	<< endl;
	cout << "sizeof(long)    = " << sizeof(long) 	<< endl;
	cout << "sizeof(long &)  = " << sizeof(long &) 	<< endl;
	cout << "sizeof(long *)  = " << sizeof(long *)  << endl;
	cout << "sizeof(int **)  = " << sizeof(int **)  << endl;
	cout << "sizeof(int ***) = " << sizeof(int ***) << endl;

	return 0;
}
