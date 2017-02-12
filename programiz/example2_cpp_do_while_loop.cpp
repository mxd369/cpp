/*
https://www.programiz.com/cpp-programming/do-while-loop
Example 2: C++ do...while Loop

C++ program to add numbers until user enters 0
*/
#include <iostream>
using namespace std;

int main()
{
	float number;
	float sum = 0.0;

	do {
		cout << "Enter a number: ";
		cin >> number;
		sum += number;
	}
	while(number != 0.0);

	cout << "Total sum = " << sum << endl;

	return 0;
}
/*
$ g++ -o example2_cpp_do_while_loop example2_cpp_do_while_loop.o
$ ./example2_cpp_do_while_loop
Enter a number: 0
Total sum = 0g++ -std=c++14 -c example2_cpp_do_while_loop.cpp

$ g++ -o example2_cpp_do_while_loop example2_cpp_do_while_loop.o
$ ./example2_cpp_do_while_loop
Enter a number: 9
Enter a number: 8
Enter a number: 7
Enter a number: 6
Enter a number: 5
Enter a number: 4
Enter a number: 3
Enter a number: 2
Enter a number: 1
Enter a number: 0
Total sum = 45
*/