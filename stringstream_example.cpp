// https://www.youtube.com/watch?v=LM6EDIKS5Pk
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	cout << "Enter an integer value" << endl;
	int input;
	cin >> input;

	stringstream sso;
	sso << input;
	string strinput;
	sso >> strinput;

	cout << "The integer number " << input << endl;
	cout << "The string form of integer number " << strinput << endl;

	return 0;
}
/*
$ make
g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c stringstream_example.cpp
g++ -o stringstream_example stringstream_example.o
$ ./stringstream_example
Enter an integer value
11 11 22 33
The integer number 11
The string form of integer number 11
*/