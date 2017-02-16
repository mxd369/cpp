#include <iostream>
using namespace std;
int main(){

	cout << sizeof(char) 	<< endl;
	cout << sizeof(char &) 	<< endl;
	cout << sizeof(char *) 	<< endl;
	cout << sizeof(short) 	<< endl;
	cout << sizeof(short &) << endl;
	cout << sizeof(short *) << endl;
	cout << sizeof(int)		<< endl;
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
	cout << "sizeof(int)     = " << sizeof(int)		<< endl;
	cout << "sizeof(int &)   = " << sizeof(int &) 	<< endl;
	cout << "sizeof(int *)   = " << sizeof(int *)	<< endl;
	cout << "sizeof(long)    = " << sizeof(long) 	<< endl;
	cout << "sizeof(long &)  = " << sizeof(long &) 	<< endl;
	cout << "sizeof(long *)  = " << sizeof(long *)  << endl;
	cout << "sizeof(int **)  = " << sizeof(int **)  << endl;
	cout << "sizeof(int ***) = " << sizeof(int ***) << endl;

	return 0;
}
/*
1. What are the sizes of the following C++ types on Nike using g++ (GCC) 6.2.0? Please include your units. Hint: You can use the sizeof operator and print out the sizes!
(a) char
(b) char &
(c) char *
(d) short
(e) short &
(f) short *
(g) int
(h) int &
(i) int *
(j) long
(k) long &
(l) long *
(m) int **
(n) int ***
*/
// http://en.cppreference.com/w/cpp/language/sizeof
/*
sizeof(char)    = 1
sizeof(char &)  = 1
sizeof(char *)  = 8
sizeof(short)   = 2
sizeof(short &) = 2
sizeof(short *) = 8
sizeof(int)     = 4
sizeof(int &)   = 4
sizeof(int *)   = 8
sizeof(long)    = 8
sizeof(long &)  = 8
sizeof(long *)  = 8
sizeof(int **)  = 8
sizeof(int ***) = 8
*/

/*
	cout << "sizeof(char)    = " << sizeof(char) 	<< endl; 1
	cout << "sizeof(char &)  = " << sizeof(char &) 	<< endl; 1
	cout << "sizeof(char *)  = " << sizeof(char *) 	<< endl; 8
	cout << "sizeof(short)   = " << sizeof(short) 	<< endl; 2
	cout << "sizeof(short &) = " << sizeof(short &) << endl; 2
	cout << "sizeof(short *) = " << sizeof(short *) << endl; 8
	cout << "sizeof(int)     = " << sizeof(int)		<< endl; 4
	cout << "sizeof(int &)   = " << sizeof(int &) 	<< endl; 4
	cout << "sizeof(int *)   = " << sizeof(int *)	<< endl; 8
	cout << "sizeof(long)    = " << sizeof(long) 	<< endl; 8
	cout << "sizeof(long &)  = " << sizeof(long &) 	<< endl; 8
	cout << "sizeof(long *)  = " << sizeof(long *)  << endl; 8
	cout << "sizeof(int **)  = " << sizeof(int **)  << endl; 8
	cout << "sizeof(int ***) = " << sizeof(int ***) << endl; 8
*/

/*
1
1
8
2
2
8
4
4
8
8
8
8
8
8
*/