/*
Exercise 4:
Write a program that prompts the user to enter two integer values.
Store these values in int variables named val1 and val2.
Write your program to determine the smallest, largest, sum,
difference, product, and ratio of these values and report them to the user.
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
int main()
{
	int val1 = 0;
	int val2 = 0;
	cout << "Please enter two integer values separated by a space: ";
	cin >> val1 >> val2;
	if (!cin) cout<<"something went bad with the read";
	cout << "values : " << val1 << " " << val2 << '\n';
	
	// if statement comparison
	if (val1<val2) cout << val1 << " is smallest\n";
	if (val2<val1) cout << val2 << " is smallest\n";
	if (val1==val2) cout << val1 << " and " << val2 << " are equal\n"; // I "forgot" to ask for that possibility
	
	// sum
	cout << "sum : " << val1+val2 << '\n';
	
	// product
	cout << "product : " << val1*val2 << '\n';
	
	// ratio
	if (val2==0)
		cout<< "good try! but I don't divide by zero\n";
	else
		cout<< "ratio (val1/val2): " << val1/val2 << '\n'; // note that this is integer division so 5/2 is not (2.5)
	
	
	// some more tests:
	if (val1<0) cout << val1 << " is negative\n";
	cout << "difference (val1-val2) : " << val1-val2 << '\n';
	if (val2!=0) cout << "remainder (val1%val2) : " <<val1%val2 << '\n';
	cout << "square(val1) : " <<val1*val1 << '\n';
	
	
}
/*
    How would you test this?
    First try some sensible numbers
        1 2
        99999 44
        -23 9
    etc.

    When that gets boring try to see if you can break the code by giving "bad" input:
        0 0
        -123456789 987654321
        one two
    etc.
*/