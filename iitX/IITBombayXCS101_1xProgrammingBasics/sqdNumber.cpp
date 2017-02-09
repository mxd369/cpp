/* Practice Programming Assignment (PPA 02):
Find the sum of squares of individual digits of a number 'sqdnumber'
and store the sum in variable 'sqdNumber_result'.
E.g. if the number is 234,
the sum is computed as (2**2 + 3**2 + 4**2 = 4 + 9 + 16 = 29) 
*/
/*
Question:
Find the sum of squares of individual digits of a number 'sqdnumber'
and store the sum in variable 'sqdNumber_result'.
int sqdnumber: Original number
int sqdNumber_result: Store the resultant in this variable
*/
#include <iostream>
using namespace std;
squaredSum(int sqdnumber,int &sqdNumber_result) {
	//int sqdnumber = 234;
	//int sqdNumber_result = 0;
	/*
	int ones = sqdnumber % 10;
	int tens = (sqdnumber % 100) - (sqdnumber % 10);
	int hundreds = (sqdnumber % 1000) - tens - ones;
	int sqd_ones = ones * ones;
	int sqd_tens = tens * tens;
	int sqd_hundreds = hundreds * hundreds;
	sqdNumber_result = sqd_ones + sqd_tens + sqd_hundreds;
	cout << sqd_ones << endl;
	cout << sqd_tens << endl;
	cout << sqd_hundreds << endl;
	cout << sqdNumber_result << endl;
	counter = 10;
	counter = counter * counter;
	*/
	/* output test
	cout << ones << endl;
	cout << tens << endl;
	cout << hundreds << endl;
	*/
	/*
	int ones;
	for number in 1's place;    take number and square;
	int tens;
	for number in 10's place;   take number and square;
	int hundreds;
	for number in 100's place;  take number and square;
	*/
	sqdNumber_result = sqdnumber + 1;
	return sqdNumber_result;
}

int main(){
	int z;
	z = squaredSum(234);
	cout << "sqdNumber_result: " << sqdNumber_result;
	return 0;
}

