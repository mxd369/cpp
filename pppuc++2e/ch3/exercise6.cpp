/*
Exercise 6:
Write a program that prompts the user to enter 3 integer values,
and then outputs the values in numerical sequence separated by commas.
So: if the user enters the values 10 4 6, the output should be 4, 6, 10.
If two values are the same, they should just be ordered together.
So, the input 4 5 4 should give 4, 4, 5.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	// initialize int variables
	int val1 = 0;
	int val2 = 0;
	int val3 = 0;
	
	// prompt user for values
	cout<<"Please enter 3 integer values with spaces in between: "<<'\n';
	
	// read in int values
	cin>>val1>>val2>>val3;
	
	// read out collected values
	cout<<"values: " << val1 << " " << val2 << " " << val3 << '\n';
	
	// solution idea: 3 variables: smallest, middle, largest : compare
	// initialize smallest, middle, largest
	int smallest = 0;
	int middle = 0;
	int largest = 0;
	
	// implement solution
	if(val1<=val2 && val1<=val3){
		smallest = val1;
		if(val2<=val3){
			middle = val2;
			largest = val3;
		}
		else{
			middle = val3;
			largest = val2;
		}
	}
    else if(val2<=val1 && val2<=val3){
        smallest = val2;
		if(val1<=val3){
			middle = val1;
			largest = val3;
		}
			else{
				middle = val3;
				largest = val1;
			}
		}
	else{
		smallest = val3;
		if(val1<=val2){
			middle = val1;
			largest = val2;
		}
		else{
			middle = val2;
			largest = val1;
		}
	}
  cout << "Sorted values: " << smallest << ", " << middle << ", " << largest << '\n';
}