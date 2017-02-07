/*

2)

Write a program in C++ that converts from miles to kilometers. Your program should have a reasonable prompt for the user to enter a number of miles. Hint: There are 1.609 kilometers to the mile.

*/

#include "std_lib_facilities.h"
using namespace std;
int main(){

	double miles = 0;
	double kilometers = 0;

	cout << "Enter a number of miles to convert: " << endl;
	cin >> miles;
	cout << "Now converting " << miles << " miles to kilometers..." << endl;
	kilometers = miles * 1.609;

	cout << miles << " miles equals " << kilometers << " kilometers." << endl;

	return 0;
}
/*
Compile and run:

$ g++ -std=c++11 -c ch3_exercise2.cpp
In file included from ch3_exercise2.cpp:9:
./std_lib_facilities.h:107:8: warning: comparison of unsigned expression < 0 is always false
      [-Wtautological-compare]
                if (i<0||size()<=i) throw Range_error(i);
                    ~^~
./std_lib_facilities.h:113:8: warning: comparison of unsigned expression < 0 is always false
      [-Wtautological-compare]
                if (i<0||size()<=i) throw Range_error(i);
                    ~^~
2 warnings generated.

$ g++ -o ch3_exercise2 ch3_exercise2.o
$ ./ch3_exercise2
Enter a number of miles to convert: 
1
Now converting 1 miles to kilometers...
1 miles equals 1.609 kilometers.

*/