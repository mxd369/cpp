#include <iostream>
using namespace std;
int main(){
	int number;
	int i = 1;
	int factorial = 1;

	cout << "Enter a positive integer: " ;
	cin >> number;

	// while
	while (i <= number){
		factorial *= i;
		++i;//increment
	}

	cout << "Factorial of " << number << " is " << factorial << endl;
	return 0;
}
/*
$ g++ -std=c++14 -c example1_cpp_while_loop.cpp
$ g++ -o example1_cpp_while_loop example1_cpp_while_loop.o
$ ./example1_cpp_while_loop
Enter a positive integer: 10
Factorial of 10 is 3628800
*/