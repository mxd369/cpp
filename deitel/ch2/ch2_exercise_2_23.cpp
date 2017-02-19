/*
(Largest and Smallest Integers) Write a program that reads in five integers and determines and prints the largest and the smallest integers in the group. Use only the programming techniques you learned in this chapter.
*/
#include <iostream>
using namespace std;

int main(){
	int smallest{0};
	int largest{0};
	int val1{0};
	int val2{0};
	int val3{0};
	int val4{0};
	int val5{0};
	cout << "Give five numbers: " << endl;
	cin >> val1 >> val2 >> val3 >> val4 >> val5;

	smallest = val1;
	if (val2 < val1){
		smallest = val2;
	}
	if (val3 < val1){
		smallest = val3;
	}
	if (val4 < val1){
		smallest = val4;
	}
	if (val5 < val1){
		smallest = val5;
	}

	largest = val1;
	if (val2 > val1){
		largest = val2;
	}
	if (val3 > val1){
		largest = val3;
	}
	if (val4 > val1){
		largest = val4;
	}
	if (val5 > val1){
		largest = val5;
	}

	cout << "largest is: " << largest << endl;
	cout << "smallest is: " << smallest << endl;

	return 0;
}
/*
$ ./ch2_exercise_2_23
Give five numbers: 
10 90 34 77 888
largest is: 888
smallest is: 10

$ ./ch2_exercise_2_23
Give five numbers: 
800 -112 56940 12 3 4
largest is: 56940
smallest is: 3
*/