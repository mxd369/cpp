/*
primesum.cpp:

Let the user input a single integer n where 1 <= n <= 100000.

Your program should print the sum of the first n prime numbers.
Remember, you do not need nor should you use an array to solve this problem.
In the first example below, the first 5 prime numbers are 2, 3, 5, 7, and 11.

Enter integer: 5
Prime sum: 28

Enter integer: 100000
Prime sum: 62260698721
*/
#include <iostream>
using namespace std;
int main(){

	int single_integer = 0;
	int prime_sum = 0;

	cout << "Enter an integer: " << endl;

	cin >> single_integer;
	int count = 0;
	for(int i = 0; i < single_integer; i++){
		count++;
		// if num something something prime, primesum++
	}

	cout << count << endl;
	cout << prime_sum << endl;
	return 0;
}