#include <iostream>
using namespace std;
int main(){
	int i = 5;
	int * ip = &i;
	cout << "(a) : " << ip 	     << endl; // (a)
	cout << "(b) : " << (ip + 1) << endl; // (b)
	cout << "(c) : " << (ip + 2) << endl; // (c)
	cout << "(d) : " << (ip + 3) << endl; // (d)
	cout << "(e) : " << (ip + 4) << endl; // (e)
	return 0;
}
