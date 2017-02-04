/*
minmax.cpp:

Let the user input a one or more integers, space separated,
on a single line (as seen below),
then work out and display the largest and smallest values.
Remember, you do not need nor should you use an array to solve this problem.

Enter integers: 1 9 3 7 5 6 4 8 2 10
Min: 1
Max: 10
*/
#include<iostream>
#include <sstream>
using namespace std;

int main()
{
	// prompt for user data
	cout << "Enter integers: " << endl;

	int Number;
	int Count;

	// getline
	string input;
	getline(cin,input);

	stringstream stream(input);

	int Minimum = 99999;
	int Maximum = -1;

	// start: loop construct and computations
	while(stream >> Number){
		// code here
		int i = 0;
		for(i = 0; i < Number; i++){
			// cout << "Number is: " << Number << endl;
			if(Number < Minimum)
				Minimum = Number;
			if(Number > Maximum)
				Maximum = Number;
			}

		++Count;
	}

	cout << "Min: " << Minimum << endl;
	cout << "Max: " << Maximum << endl;

	return 0;
}//end of main function
