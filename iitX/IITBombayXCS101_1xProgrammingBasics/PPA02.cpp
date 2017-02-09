/*
Question: Find the sum of squares of individual digits of a number 'sqdnumber'
and store the sum in variable 'sqdNumber_result'. 
int sqdnumber: Original number
int sqdNumber_result: Store the resultant in this variable
*/

#include<iostream>
using namespace std;
void squaredSum(int sqdnumber,int &sqdNumber_result) {

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
	
	sqdNumber_result = one_sqd + ten_sqd + hundred_sqd + thousand_sqd + tenthousand_sqd;

	cout << sqdNumber_result << endl;
}
/*
Tests

0
7
0
0
0
49
Non Graded Test Cases


Non Graded Test Case #1

Checking Function 'sqdnumber'

Input Number:70
Your Output=49
Expected Output=49
Output matches

All Non Graded Test Cases Passed!

Checking for graded test cases...

4
2
0
0
0
20

Graded Test Case #1:

Checking Function 'sqdnumber'

Input Number:24
Output matches

Graded Test Case #1 Passed.

6
4
0
0
0
52

Graded Test Case #2:

Checking Function 'sqdnumber'

Input Number:46
Output matches

Graded Test Case #2 Passed.

5
5
0
0
0
50

Graded Test Case #3:

Checking Function 'sqdnumber'

Input Number:55
Output matches

Graded Test Case #3 Passed.

Result

Test Summary

Your function "sqdnumber" passes graded test case #1

Your function "sqdnumber" passes graded test case #2

Your function "sqdnumber" passes graded test case #3

Expected Grade :   10


*/