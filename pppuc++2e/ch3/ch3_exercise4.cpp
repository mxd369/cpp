/*

4)

Write a program that prompts the user to enter two integer values. Store these values in int variables named val1 and val2. Write your program to determine the smaller, larger, sum, difference, product, and ratio of these values and report them to the user.
*/


#include "std_lib_facilities.h"
using namespace std;
int main(){

	int val1 = 0;
	int val2 = 0;
	int smaller;
	int larger;
	int sum;
	int difference;
	int product;
	int ratio;
	cout<<"Give two integer values: "<< endl;
	cin >> val1 >> val2;

	// smaller & larger
	if (val1 > val2) {
		larger = val1;
		smaller = val2;
	}
	else {
		smaller = val1;
		larger = val2;
	}

	// sum
	sum = val1 + val2;


	// difference;
	difference = larger - smaller;

	// product
	product = val1 * val2;

	// ratio
	//ratio = val1 + ":" + val2;

	// display results
	cout << "smaller: " << smaller << endl;
	cout << "larger: " << larger << endl;
	cout << "sum: " << sum << endl;
	cout << "difference: " << difference << endl;
	cout << "product: " << product << endl;
	cout << "ratio of val1 to val2: " << val1 << ":" << val2 << endl;


	return 0;
}
/*
compile & run:
$ g++ -o ch3_exercise4 ch3_exercise4.o
$ ./ch3_exercise4
Give two integer values: 
1
2
smaller: 1
larger: 2
sum: 3
difference: 1
product: 2
ratio of val1 to val2: 1:2

test values:
1
2
...
*/