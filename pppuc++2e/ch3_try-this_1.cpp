/*

Try This

Get the “name and age” example to run. Then, modify it to write out the age in months: read the input in years and multiply (using the * operator) by 12. Read the age into a double to allow for children who can be very proud of being five and a half years old rather than just five.

*/
#include "std_lib_facilities.h"
using namespace std;

// read name and age (2nd version)
int main()
{
	cout << "Please enter your first name and age\n";
	string first_name = "???"; // string variable

	// ("???” means “don’t know the name”)
	double age = -1; // integer variable (–1 means “don’t know the age”)
	cin >> first_name >> age; // read a string followed by an integer
	cout << "Hello, " << first_name << " (age " << age << ")\n";

	double age_in_months;
	age_in_months = age * 12;
	
	cout << "age in months is: " << age_in_months << endl;
	
	return 0;
}