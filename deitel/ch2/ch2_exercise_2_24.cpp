/*
(Odd or Even) Write a program that reads an integer and determines and prints whether it’s odd or even. [Hint: Use the modulus operator. An even number is a multiple of two. Any multiple of two leaves a remainder of zero when divided by 2.]
*/
#include <iostream>
using namespace std;

int main(){
	int value{0};
	cout << "Give an integer: " << endl;
	cin >> value;
	if (value % 2 == 0){
		cout << value << " is even." << endl;
	}
	else {
		cout << value << " is odd." << endl;
	}
	return 0;
}
/*
$ ./ch2_exercise_2_24
Give an integer: 
10
10 is even.

$ ./ch2_exercise_2_24
Give an integer: 
333
333 is odd.
*/