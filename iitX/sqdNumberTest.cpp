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

int main(){

	int sqdnumber = 234;

	int one = sqdnumber % 10;
	int ten = sqdnumber / 10 % 10;
	int hundred = sqdnumber / 100 % 10;
	int thousand = sqdnumber / 1000 % 10;
	int tenthousand = sqdnumber / 10000 % 10;

	cout << one << endl;
	cout << ten << endl;
	cout << hundred << endl;
	cout << thousand << endl;
	cout << tenthousand << endl;
	
	int one_sqd = one * one;
	int ten_sqd = ten * ten;
	int hundred_sqd = hundred * hundred;
	int thousand_sqd = thousand * thousand;
	int tenthousand_sqd = tenthousand * tenthousand;
	
	int sqdNumber_result = one_sqd + ten_sqd + hundred_sqd + thousand_sqd + tenthousand_sqd;

	cout << sqdNumber_result << endl;

	return 0;
}
