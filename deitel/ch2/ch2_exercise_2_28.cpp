/*
(Digits of an Integer) Write a program that inputs a five-digit integer, separates the integer into its digits and prints them separated by three spaces each. [Hint: Use the integer division and modulus operators.] For example, if the user types in 42339, the program should print:

4	2	3	3	9
*/
#include <iostream>
using namespace std;

int main(){
	int five_digit_num{0};
	int first{0};
	int second{0};
	int third{0};
	int fourth{0};
	int fifth{0};
	cout << "Enter a five digit integer: " << endl;
	cin >> five_digit_num;
	//cout << five_digit_num % 10000 << endl;// 2339
	//cout << five_digit_num / 10000 << endl;// 4

	first = five_digit_num / 10000;
	second = five_digit_num / 1000 % 10;
	third = five_digit_num % 1000 / 100;
	fourth = five_digit_num % 100 / 10;
	fifth = five_digit_num % 10;

	/*
		42339 / 1000 = 42.339
		42339 / 100  = 423.39
		42339 / 10   = 4233.9
	*/

	cout << first << "   ";
	cout << second << "   ";
	cout << third << "   ";
	cout << fourth << "   ";
	cout << fifth << endl;
	return 0;
}
/*
$ ./ch2_exercise_2_28
Enter a five digit integer: 
12345
1   2   3   4   5

$ ./ch2_exercise_2_28
Enter a five digit integer: 
42339
4   2   3   3   9
*/
/*
>>> 42339 % 100 / 100
0.39
>>> 42339 % 100 % 100
39
>>> 42339 % 1000 % 100
39
>>> 42339 % 1000 / 100
3.39
*/