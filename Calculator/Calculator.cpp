#include "Calculator.h"
// --------------------------------------------------------------
Calculator::Calculator( int Initial )
{
setValue( Initial );
}
// --------------------------------------------------------------
int Calculator::getValue() const
{
return mValue;
}
// --------------------------------------------------------------
void Calculator::setValue( int Value )
{
mValue = Value;
}
// --------------------------------------------------------------
void Calculator::Add( int Value )
{
mValue += Value;
}
// --------------------------------------------------------------
void Calculator::Subtract( int Value )
{
mValue -= Value;
}
// --------------------------------------------------------------
void Calculator::Multiply( int Value )
{
mValue *= Value;
}
// --------------------------------------------------------------
void Calculator::DivideBy( int Value )
{
mValue /= Value;
}
// --------------------------------------------------------------
void Calculator::Clear()
{
mValue = 0;
}
