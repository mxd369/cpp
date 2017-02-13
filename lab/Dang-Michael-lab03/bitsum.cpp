/*
bitsum.cpp:

Let the user input a single integer n where 1 <= n <= 18446744073709551615.
Your program should print the number of 1 bits in the binary representation of n.

Remember, you do not need nor should you use an array to solve this problem.
In the example below, the binary representation of 115 is 1110011.

Remember, you should not use string manipulation beyond extraction from an std::stringstream, if needed.

Enter integer: 115
Bit sum: 5

piazza-note: Modulo 2 and dividing by 2 should be all that's needed.
Alec Repczynski
*/
#include <iostream>
using namespace std;
int main() {
	int number;// storage
	cout << "Enter integer: ";// prompt on one line
	cin >> number;// input
	int sum = 0;// does placement matter?
	// need a loop, while or for? Test, choose while
	while(number > 0){
		/* important: use modulo 2 'piazza Alec Repcyznski'*/
		// condition
		if(number % 2 == 1){ sum = sum + 1;}
		/* Important: divide by 2 'piazza Alec Repcyznski' */
		number = number / 2;
	}
	cout << "Bit sum: " << sum << endl;// display, endline 

	return 0;// return to caller
}// main
/*
$ bitsum
Enter integer: 115
Bit sum: 5

$ bitsum
Enter integer: 115
Bit sum: 5
1110011

$ bitsum
Enter integer: 116
Bit sum: 4
1110100

$ bitsum
Enter integer: 117
Bit sum: 5
1110101

$ bitsum
Enter integer: 120
Bit sum: 4
1111000
*/