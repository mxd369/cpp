#include <iostream>	// Allows program to perform input and output
using std::cout;	// program uses cout

#include "Rectangle.h"

// default constructor
Rectangle::Rectangle()
{
	setLength(1.0);
	setWidth(1.0);
} // end constructor

// set the length of the rectangle
void Rectangle::setLength(float myLength)
{
	// validate myLength
	if((myLength < 20) && (myLength > 0))
		length = myLength;
	else
	{
		cout << "\n\nInvalid Length. Default length will be assigned.";
		length = 1.0;
	}
} // end function setLength

// set the width of the rectangle
void Rectangle::setWidth(float myWidth)
{
	// validate myWidth
	if((myWidth < 20) && (myWidth > 0))
		width = myWidth;
	else
	{
		cout << "\n\nInvalid width. Default width will be assigned.";
		width = 1;
	}
}// end function setWidth

// return the value of rectangle length
float Rectangle::getLength()
{
	return length;
}// end function getLength


// return the value of rectangle width
float Rectangle::getWidth()
{
	return length;
}// end function getWidth

// return the area of the rectangle
float Rectangle::getArea()
{
	return (length * width);
}// end function getArea

// return perimeter of the rectangle
float Rectangle::getPerimeter()
{
	return (2* (length+width));
}// end function getPerimeter