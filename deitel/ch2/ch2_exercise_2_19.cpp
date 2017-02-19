/*
(Arithmetic, Smallest and Largest) Write a program that inputs three integers from the keyboard and prints the sum, average, product, smallest and largest of these numbers. The screen dialog should appear as follows:

Input three different integers: 13 27 14
Sum is 54
Average is 18
Product is 4914
Smallest is 13
Largest is 27
*/
#include <iostream>
using namespace std;

int main(){

	int Sum{0};
	int Average{0};
	int Product{0};
	int Smallest{0};
	int Largest{0};

	int val1{0};
	int val2{0};
	int val3{0};

	cout << "Input three different integers: " << endl;
	cin >> val1 >> val2 >> val3;

	Sum = val1 + val2 + val3;
	Product = val1 * val2 * val3;
	Average = Sum / 3;

	Largest = val1;
	if (val2 > val1){
		Largest = val2;
	}
	else if (val3 > val1){
		Largest = val3;
	}

	Smallest = val1;
	if (val2 < val1){
		Smallest = val2;
	}
	else if (val3 < val1){
		Smallest = val1;
	}

	cout << "Sum: "<< Sum << endl;
	cout << "Average: "<< Average << endl;
	cout << "Product: "<< Product << endl;
	cout << "Smallest: "<< Smallest << endl;
	cout << "Largest: "<< Largest << endl;

	return 0;
}
/*
Input three different integers: 
13
27
14
Sum: 54
Average: 18
Product: 4914
Smallest: 13
Largest: 27
*/