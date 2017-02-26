#ifndef CALCULATOR_H
#define CALCULATOR_H
// CS 2605 Spring 2008 Lab 1
// Fill in the names and PIDs of the members of your pair:
// <student name> <student PID>
// <student name> <student PID>
class Calculator
{
public:
Calculator( int Initial = 0 );
int getValue() const;
void setValue( int Value );
void Add( int Value );
void Subtract( int Value );
void Multiply( int Value );
void DivideBy( int Value );
void Clear();
private:
int mValue;
};
#endif // CALCULATOR_H
