/*
degrees.cpp:

Celsuis (degrees) -> Fahrenheit (degrees)

Write a program to read a 
floating point number representing degrees Celsius,
and print the equivalent temperature in degrees Fahrenheit.
Print your results in a form such that the numbers are represented up to two decimal places.

Enter in a temperature in Celsius: 100
100.00 degrees Celsius converts to 212.00 degrees Fahrenheit.
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
float cel,fahren;
cout<<"Enter the temperature in celcius: ";
cin>>cel;

fahren = (9.0/5)*cel + 32;
cout<<fixed<<setprecision(2)<<cel<< " degrees Celcius converts to "<<fixed<<setprecision(2)<<fahren<<" degrees Fahrenheit";
return 0;

}//end of main function