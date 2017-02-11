/*


5)
Modify the program from exercise-4 to ask the user to enter floating-point values and store them in double variables. Compare the outputs of the two programs for some inputs of your choice. Are the results the same? Should they be? What’s the difference?


4)
Write a program that prompts the user to enter two integer values. Store these values in int variables named val1 and val2. Write your program to determine the smaller, larger, sum, difference, product, and ratio of these values and report them to the user.
*/

/*
ch3_exercise4.cpp

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
*/
#include "std_lib_facilities.h"
using namespace std;
int main(){
	// ask for floating-point, store user input in float
	// floating-point number a computer’s approximation of a real number, such as 7.93 and 10.78e–3.
	// double
	double val1 = 0;
	double val2 = 0;
	double smaller;
	double larger;
	double sum;
	double difference;
	double product;
	double ratio;
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