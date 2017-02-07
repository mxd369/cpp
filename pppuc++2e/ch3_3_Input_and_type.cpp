#include "std_lib_facilities.h"
using namespace std;
int main()
{

	cout << "Please enter your first name and age\n";
	string first_name;	// string variable
	int age;			// integer variable
	cin >> first_name;	// read a string
	cin >> age;			// read an integer
	cout << "Hello, " << first_name << " (age " << age << ")\n";

	return 0;
}

/*
$ g++ -o ch3_3_Input_and_type ch3_3_Input_and_type.o
$ ./ch3_3_Input_and_type
Please enter your first name and age
Carlos
22
Hello, Carlos (age 22)
*/
