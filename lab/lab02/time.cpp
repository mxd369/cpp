//
//
//
/*
time.cpp:

Seconds -> Hours, Minutes, Seconds

Given as input an integer number of seconds, print as output the equivalent time in hours, minutes and
seconds.

Enter in the number of seconds as an integer: 7322
7322 seconds is equivalent to 2 hours 2 minutes 2 seconds.
*/

#include <iostream>
using namespace std;
int main(){
	// variable declaration and intialization
	int second{0};
	int hour{0};
	int minute{0};
	int user_data{0};

	std::cout << "Enter the number of seconds as an integer: ";
	std::cin >> second;

	// compute: seconds into equivalent time
	user_data = second;
	hour = second/3600;
	second = second%3600;
	minute = second/60;
	second = second%60;

	std::cout << user_data << " seconds is equivalent to " << hour << " hours " << minute << " minutes " << second << " seconds." << std::endl;

	return 0;
}// main