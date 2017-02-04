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
    int val1 = 0;
	int val2 = 0;
	int val3 = 0;
	
	cout << "Please enter three integer values separated by a space: ";
	cin >> val1 >> val2 >> val3;
	if (!cin) cout<<"Something with bad with the read";
	cout << "values read : " << val1 << ", " << val2 << ", " << val3 << '\n';
	
	/* idea for a solution:
	    just test which value is the smallest and put it into "smallest"
	    then test which of the remaining two values is the smaller and put it into "middle"
	    then put the remaining variable into "largest"
	*/
	
	// initialize int smallest, middle, largest
	int smallest = 0;
	int middle = 0;
	int largest = 0;
	if(val1<=val2 && val1<=val3) {
		smallest = val1;
		if (val2<=val3) {
			middle = val2;
			largest = val3;
		}
		else {
			middle = val3;
			largest = val2;
		}
	}
	else if (val2<=val1 && val2<=val3) {
		smallest = val2;
		if (val1<=val3) {
			middle = val1;
			largest = val3;
		}
		else {
			middle = val3;
			largest = val1;
		}
	}
	else { // since neither val1 nor val2 was smaller than val3, val3 must be the smallest
		smallest = val3;
		if (val1<=val2) {
			middle = val1;
			largest = val2;
		}
		else {
			middle = val2;
			largest = val1;
		}
	}
	cout << "values sorted : " << smallest << ", " << middle << ", " << largest << '\n';
}

/*
	I think this code is rather tedious. That is, it repeats similar code three times with different
	variable names. How do we know that it is correct?

	Is there a *simple* way of doing less work? (yes) Does doing less work make this code easier to understand?
	
	What would e have to do to do this exercise for four variables? for five?
	How many if-statements would you need for four variables? for five variables?
	Chapter 4 will give us the key tool for better solutions: vectors.
*/