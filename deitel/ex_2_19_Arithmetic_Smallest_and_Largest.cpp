// 2.19 (Arthmetic, Smallest and Largest)
// Write a program that inputs three integers from the keyboard and prints the sum, average, and largest of these numbers. The screen dialog should appear as follows:

/*
Input three different integers: 13 27 14
Sum is 54
Average is 18
Product is 4914
Smallest is 13
Largest is 27
*/

#include <iostream>
int main() {
	int num1{0};
	int num2{0};
	int num3{0};
	int Sum{0};
	int Average{0};
	int Product{0};
	int Smallest{0};
	int Largest{0};
	std::cout << "Enter three integers: " << std::endl;
	std::cin >> num1 >> num2 >> num3;
	Sum = num1 + num2 + num3;
	Average = Sum/3;
	Product = num1 * num2 * num3;
	Smallest = num1;
	if(num1 > num2){ Smallest = num2;} else if (num1 > num3){ Smallest = num3;}
	Largest = num1;
	if(num1 < num2){ Largest = num2;} else if (num1 < num3){ Largest = num3;}
	std::cout << "Sum is " << Sum << std::endl;
	std::cout << "Average is " << Average << std::endl;
	std::cout << "Product is " << Product << std::endl;
	std::cout << "Smallest is " << Smallest << std::endl;
	std::cout << "Largest is " << Largest << std::endl;
}