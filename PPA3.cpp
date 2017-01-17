/* Practice Programming Assignment (PPA 03)

Happy Numbers: A number is called a happy number,
if you repeat the process, of squaring the sum of the digits,
till the value 1 is obtained.
E.g. You need to do the following to perform this check:
(a) compute the sum of the squares of its digits
(b) if the resultant value is 1, then the number is a happy number, else execute point (a).
If a number is not a happy number, there will be an endless loop/cycle to this execution. 

Task: In this programming assignment,
you are required to write code that checks whether the number is a happy number or not,
for 10 cycles (iterations) only.
2 examples of happy numbers (limited to 10 cycles ) are given below:

Example 1: Assume a number '19'

Number		Computation			Result		Cycle / Iteration
19			9^2 + 1^2			82			1
82			2^2 + 8^2			68			2
68			8^2 + 6^2			100			3
100			0^2 + 0^2 + 1^2		1			4
Stop computing further, as the Result obtained is 1.
Hence, the number '19', is a happy number.
We achieved this in 4 cycles only.

Example 2: Assume a number '3'

Number	Computation			Result		Cycle
3		3^2 				9			1
9		9^2 				81			2
81		1^2 + 8^2			65			3
65		5^2 + 6^2			61			4
61		1^2 + 6^2			37			5
37		7^2 + 3^2			58			6
58		8^2 + 5^2			89			7
89		9^2 + 8^2			145			8
145		5^2 + 4^2 + 1^2		42			9
42		2^2 + 4^2			20			10

Stop computing further, as we are allowed to compute for 10 cycles only.
The resultant value after computing 10 cycles is 20

Note: The 3 points given above should be read as:

1.
Find the sum of the squares of the digits of a number.

2.
Check the result obtained in point 1.
If it is 1, assign value 1 to the variable 'finalNumber'.
If it is not 1, then again execute point 1,
till the number obtained is 1 or till the number of cycle increases to 10.
Finally assign the resultant value obtained to the variable 'finalNumber'

3.
Assign the iteration value to the variable 'cycle_no'.
*/


/*
Question       : Write your code to find whether the number is a happy number or not (for max 10 cycles).
int number     : The number to be determined whether it is happy or not
int finalNumber: Store the resultant value in this variable
int cycle_no   : Store the number of iterations done to determine whether the 'number' is happy or not
*/


void detectHappy(int number, int &finalNumber, int &cycle_no) {
    //Write your solution code below this line
	number;
	finalNumber;
	cycle_no;

}