/*
Exercise 9:
Write a program that converts spelled out numbers such as "zero"
and "two" into digits, such as 0 and 2.
When the user inputs a number print out the corresponding digit.
Do it for the values 0,1,2,3, and 4 and write out
"not a number I know" if the user enters something that doesn't correspond,
such as ``stupid computer!''
*/

// Chapter 3 Exercise 9

#include <string>
#include <iostream>
using namespace std;
int main()
{
    cout << "Please enter an integer as a text string inclusive of zero through four: ";
	string s;
	while (cin>>s) {
		if (s == "zero")
			cout << s << " has the value 0" << " 'Message: To Exit with ctrl+Z or ctrl+D'" <<'\n';
		else if (s == "one")
			cout << s << " has the value 1" << " 'Message: To Exit with ctrl+Z or ctrl+D'" <<'\n';
		else if (s == "two")
			cout << s << " has the value 2" << " 'Message: To Exit with ctrl+Z or ctrl+D'" <<'\n';
		else if (s == "three")
			cout << s << " has the value 3" << " 'Message: To Exit with ctrl+Z or ctrl+D'" <<'\n';
		else if (s == "four")
			cout << s << " has the value 4" << " 'Message: To Exit with ctrl+Z or ctrl+D'" <<'\n';
		else
			cout << s << " does not have a numeric value I understand\n";
		cout << "Please enter another integer as a text string: ";
	}

}

/*
	To make it less tedious to test I made a loop testing strings. I "forgot" to provide a way to exit
	that loop so you must either kill the program or enter an end-of-input (cntrl-Z for Windows or cntrl-D
	for Unix). Maybe you could modify the program to end if it sees "Quit"?

	All of those ifs can get tedious (and anything tedious is error prone), but for now we don't have
	the tools to do better. later (e.g. Chapter 4), we'll see how this code can be simplified by using
	a for-loop and a vector of strings.
*/