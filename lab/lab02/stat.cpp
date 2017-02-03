/*
stat.cpp:
Let the user input one or more integers, space separated,
on a single line (as seen below), then work out
and display the sum, average, sum of squares and population variance of the numbers.
Remember, you do not need
nor should you use an array to solve this problem.

Enter integers: 2 4 1 3
Sum: 10.0
Average: 2.5
Sum of Squares: 30.0
Variance: 1.25
*/

#include <iostream>

int main(){
  // string = "2 4 1 3";
  int string_of_integers{0};
  double Sum{0};
  double Average{0};
  double Sum_of_Squares{0};
  double Variance{0};
  std::cout << "Enter integers: " << endl;
  std::cin >> 
  std::cout << "Sum: " << Sum << endl;
  std::cout << "Average: " << Average << endl;
  std::cout << "Sum of Squares: " << Sum_of_Squares << endl;
  std::cout << "Variance: " << Variance << endl;
}