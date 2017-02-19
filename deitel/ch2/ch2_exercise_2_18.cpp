/*
(Comparing Integers) Write a program that asks the user to enter two integers, obtains the numbers from the user, then prints the larger number followed by the words "is larger." If  numbers are equal, print the message "These numbers are equal."
*/
#include <iostream>
using namespace std;

int main(){
	int val1{0};
	int val2{0};
	cout << "Enter two numbers: " << endl;
	cin >> val1 >> val2;
	
	if(val1 > val2)
		cout << "val1: " << val1 << " is larger." << endl;
	
	if (val2 > val1)
		cout << "val2: " << val2 << " is larger." << endl;
	if (val1 == val2)
		cout << "These numbers are equal." << endl;

	return 0;
}
/*
$ ./ch2_exercise_2_18
Enter two numbers: 
1000
100000
val2: 100000 is larger.

$ ./ch2_exercise_2_18
Enter two numbers: 
9
1
val1: 9 is larger.

$ ./ch2_exercise_2_18
Enter two numbers: 
200
1
val1: 200 is larger.

$ ./ch2_exercise_2_18
Enter two numbers: 
-1000
-100000
val1: -1000 is larger.
*/