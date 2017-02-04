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

#include <iostream>
#include <iomanip>

int main(){
  // variable declaration and initialization
  float Celsius{0};
  float Fahrenheit{0};
  // prompt for user input, collect input
  std::cout << "Enter in a temperature in Celsius: " << std::endl;
  std::cin >> Celsius;
  // compute conversion
  Fahrenheit = (((Celsius * 9) / 5) + 32);
  // output result with 2 decimal place precision ex: 100 -> 212.00
  std::cout << std::fixed << std::setprecision(2) << Celsius << " degrees Celsius converts to " << std::fixed << std::setprecision(2) << Fahrenheit << " degrees Fahrenheit." << std::endl;
  // return control to caller
  return 0;
} // main
