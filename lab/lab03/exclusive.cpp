/*
exclusive.cpp:

Let the user input an odd number of positive integers, space separated, on a single line (as seen below).
Assume that each integer except for one, the exclusive integer, appears an even number of times in the input.
Your program should output the exclusive integer.
Remember, you do not need nor should you use an array to solve this problem.
You should also not use string manipulation beyond extraction from an std::stringstream, if needed.

Enter integers: 2 1 55 3 2 1 4 4 2 2 55
Exclusive: 3

piazza note: "Assume that each integer except for one, the exclusive integer, appears an even number of times in the input."
*/
#include <iostream>
using namespace std;
int main(){
	
	string odd_positive_integers;
	cout << "Enter odd postive integers, each separated by a space: " << endl;
	getline(cin, odd_positive_integers);

	cout << "You entered: " << odd_positive_integers << endl;
	
	// need a while loop construct
	// need to test if num == num, then num not exclusive
	// if num != any_num, then num = exclusive
	
	
	for (unsigned i=0; i<odd_positive_integers.length(); ++i)
	  {
	    cout << odd_positive_integers.at(i) << endl;
	  }
	
	
	
	return 0;
}
/*
$ ./exclusive 
Enter odd postive integers, each separated by a space: 
2 1 55 3 2 1 4 4 2 2 55
You entered: 2 1 55 3 2 1 4 4 2 2 55
*/

