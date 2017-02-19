/*
(Diameter, Circumference and Area of a Circle) Write a program that reads in the radius of a circle as an integer and prints the circle’s diameter, circumference and area. Use the constant value 3.14159 for π. Do all calculations in output statements. [Note: In this chapter, we’ve discussed only integer constants and variables. In Chapter 4 we discuss floating-point numbers, i.e., values that can have decimal points.]
*/
#include <iostream>
using namespace std;
/*
The Radius is the distance from the center outwards.
The Diameter goes straight across the circle, through the center.
The Circumference is the distance once around the circle.
When we divide the circumference by the diameter we get 3.14159
*/

int main(){
	int radius{0};
	cout << "Give the radius of a circle: " << endl;
	cin >> radius;

	cout << "diameter: "<< 2 * radius << endl;
	cout << "circumference: "<< 2 * 3.14159 * radius << endl;
	cout << "area: "<< 3.14159 * (radius * radius) << endl;

	return 0;
}
/*
check with: http://www.rkm.com.au/CALCULATORS/CALCULATOR-circle-sphere.html

$ ./ch2_exercise_2_20 
Give the radius of a circle: 
10
diameter: 20
circumference: 62.8318
area: 314.159

$ ./ch2_exercise_2_20 
Give the radius of a circle: 
5
diameter: 10
circumference: 31.4159
area: 78.5397
*/