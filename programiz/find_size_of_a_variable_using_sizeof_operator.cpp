/*

find_size_of_a_variable_using_sizeof_operator.cpp

C++ Program to Find Size of int, float, double and char in Your System.

This program declares 4 variables of type int, float, double and char. Then, the size of each variable is evaluated using sizeof operator.
*/
#include <iostream>
using namespace std;
int main()
{
	cout << "Size of char: " << sizeof(char) << " byte" << endl;
	cout << "Size of int: " << sizeof(int) << " byte" << endl;
	cout << "Size of float: " << sizeof(float) << " byte" << endl;
	cout << "Size of double: " << sizeof(double) << " byte" << endl;

	return 0;
}

/*
$ g++ -c -std=c++14 find_size_of_a_variable_using_sizeof_operator.cpp
$ g++ -o find_size_of_a_variable_using_sizeof_operator find_size_of_a_variable_using_sizeof_operator.o

$ ./find_size_of_a_variable_using_sizeof_operator
Size of char: 1 byte
Size of int: 4 byte
Size of float: 4 byte
Size of double: 8 byte
*/