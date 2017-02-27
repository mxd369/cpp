#include <iostream> // allow program to perform input and output
using std::cout;	// program uses cout
using std::cin;		// program uses cin

#include "Rectangle.h"

// driver program to test the functionality of the Rectangle class
int main()	// funciton main begins program execution
{
	float t;
	// let the user know about the program
	cout << "\n\n\tA program that works with Rectangle class.";

	// create an object of type Rectangle
	Rectangle myRectangle;

	// display initial values
	cout << "\n\nInitial values of the rectangle were: " << "\n\nLength = " << myRectangle.getLength()
	<< "\n\nWidth = " << myRectangle.getWidth();

	// modify the values of the object of rectangle
	cout << "\n\n\tModify the rectangle dimensions.";
	cout << "\n\n\tEnter length: ";
	cin >> t;
	myRectangle.setLength(t);
	cout << "\n\tEnter width: ";
	cin >> t;
	myRectangle.setWidth(t);

	// print the modified values of the object
	cout << "\n\n\tAfter modifying the values, the dimensions were : ";
	cout << "\n\tLength = " << myRectangle.getLength();
	cout << "\n\tWidth = " << myRectangle.getWidth();

	// print the other calculations of the object
	cout << "\n\n\tThe area of the rectangle is " << myRectangle.getArea();
	cout << "\n\n\tThe perimeter of the rectangle is " << myRectangle.getPerimeter();

	// let the screen wait to see the output
	cout << "\n\n\t";
	return 0; // indicate program executed successfully
}// end of function main