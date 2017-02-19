/*
(Arithmetic) Write a program that asks the user to enter two numbers, obtains the two numbers from the user and prints the sum, product, difference, and quotient of the two numbers.
*/
#include <iostream>
using namespace std;

int main(){
	int sum{0};
	int product{0};
	int difference{0};
	int quotient{0};
	int val1{0};
	int val2{0};
	cout << "Give two numbers: " << endl;
	cin >> val1 >> val2;
	sum = val1 + val2;
	product = val1 * val2;
	if (val1 >= val2){
		difference = val1 - val2;
	}
	else{
		difference = val2 - val1;
	}
	if (val1 >= val2){
		quotient = val1/val2;
	}
	else{
		quotient = val2/val1;
	}
	cout << "Sum: "<< sum << endl;
	cout << "Product: "<< product << endl;
	cout << "Difference: "<< difference << endl;
	cout << "Quotient: "<< quotient << endl;
	return 0;
}
/*
$ ./ch2_exercise_2_16 
Give two numbers: 
19
17
Sum: 36
Product: 323
Difference: 2
Quotient: 1

$ ./ch2_exercise_2_16 
Give two numbers: 
10
5
Sum: 15
Product: 50
Difference: 5
Quotient: 2
*/