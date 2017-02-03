#include <iostream>
int main(){
  float Celsius{0};
  float Fahrenheit{0};
  std::cout << "Enter in a temperature in Celsius: " << std::endl;
  std::cin >> Celsius;
  Fahrenheit = (((Celsius * 9) / 5) + 32);
  std::cout << Celsius << " degrees Celsius converts to " << Fahrenheit << " degrees Fahrenheit." << std::endl;
  return 0;
}