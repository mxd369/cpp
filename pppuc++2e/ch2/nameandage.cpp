#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    cout<<"Please enter your first_name and age\n";
	string first_name = "???";  // string variable
	                            // "???" means "don't know the name"
	int age = -1;               // integer variable (-1 means "don't know the age")
    cin>>first_name>>age;
	cout<<"Hello,"<<first_name<<"(age"<<age<<")\n";
}


int main()
{
	cout<<"Please enter your first name and age\n";
	string first_name;
	int age;
	cin>>first_name;
	cin>>age;
	cout<<"Hello,"<<first_name<<" (age"<<age<<")\n";
}

/*
1)
Get the "name and age" example to run.
Test: 
2)
Then, modify it to write out the age in months: read the input in years and multiply (using the * operator) by 12.
Test:
3)
Read the age into a double to allow for children who can be very proud of being 5.5 years old rather than just 5
Test:
*/