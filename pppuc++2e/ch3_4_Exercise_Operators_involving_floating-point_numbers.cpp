// 3.4 Operations and operators
// In addition to specifying what values can be stored in a variable, the type of a variable determines what operations we can apply to it and what they mean.
#include "std_lib_facilities.h"
using namespace std;
// simple program to exercise operators
int main()
{
	cout << "Please enter a floating-point value: ";
	double n;
	cin >> n;
	cout << "n == " << n
	<< "\nn+1 == " << n+1
	<< "\nthree times n == " << 3*n
	<< "\ntwice n == " << n+n
	<< "\nn squared == " << n*n
	<< "\nhalf of n == " << n/2
	<< "\nsquare root of n == " << sqrt(n)
	<< '\n'; // another name for newline (“end of line”) in output

	return 0;
}

/*
$ g++ -std=c++11 -c ch3_4_Exercise_Operators_involving_floating-point_numbers.cpp
In file included from ch3_4_Exercise_Operators_involving_floating-point_numbers.cpp:3:
./std_lib_facilities.h:107:8: warning: comparison of unsigned expression < 0 is always false
      [-Wtautological-compare]
                if (i<0||size()<=i) throw Range_error(i);
                    ~^~
./std_lib_facilities.h:113:8: warning: comparison of unsigned expression < 0 is always false
      [-Wtautological-compare]
                if (i<0||size()<=i) throw Range_error(i);
                    ~^~
2 warnings generated.

$ g++ -o ch3_4_Exercise_Operators_involving_floating-point_numbers ch3_4_Exercise_Operators_involving_floating-point_numbers.o

$ ./ch3_4_Exercise_Operators_involving_floating-point_numbers
Please enter a floating-point value: 1.11
n == 1.11
n+1 == 2.11
three times n == 3.33
twice n == 2.22
n squared == 1.2321
half of n == 0.555
square root of n == 1.05357
*/