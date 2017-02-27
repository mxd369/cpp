// Definition of class Rectangle (Rectangle.h)
// Member functions are defined in Rectangle.cpp
// prevent multiple inclusions of header file
# ifndef RECTANGLE_H
# define RECTANGLE_H

// definition of the class Rectangle
class Rectangle {
public:
	// member functions of the class
	Rectangle(); // default constructor

	// set functions
	void setLength(float);
	void setWidth(float);

	// get functions
	float getLength();
	float getWidth();

	// other utilitiy functions
	float getArea();
	float getPerimeter();

// data members of the class
private:
	float length;
	float width;
}; // end template class Rectangle
# endif