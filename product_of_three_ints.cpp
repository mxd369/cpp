// write a program that calculates and displays the product of three integers
#include <iostream> //  enables program to perform input and output
using namespace std; // program uses names from the std namespace
// function main begins program execution
int main(){
	int a{0};// first integer to multiply
	int b{0};// second integer to multiply
	int c{0};// third integer to multiply
	int product{0};// the product of three integers a, b, c
	cout << "Enter three integers: " << endl;// prompt user for data
	cin >> a >> b >> c;// read three integers from user
	product = a * b * c;//multiply the three integers: store result
	cout << "The product is " << product << endl;// print result: end line
} // end main function