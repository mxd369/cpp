/*
(Multiples) Write a program that reads in two integers and determines and prints if the first is a multiple of the second. [Hint: Use the modulus operator.]
*/
#include <iostream>
using namespace std;

int main(){
	int first{0};
	int second{0};
	cout << "Input two integers: " << endl;
	cin >> first >> second;
	if (second % first == 0){
		cout << first << " is a multiple of " << second << endl;
	}
	if (first % second == 0){
		cout << second << " is a multiple of " << first << endl;
	}
	return 0;
}
/*
$ ./ch2_exercise_2_25
Input two integers: 
100
10
10 is a multiple of 100

$ ./ch2_exercise_2_25
Input two integers: 
90
9
9 is a multiple of 90

$ ./ch2_exercise_2_25
Input two integers: 
9
90
9 is a multiple of 90
*/