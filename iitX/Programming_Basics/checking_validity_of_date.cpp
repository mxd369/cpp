#include <iostream>
using namespace std;

int main()
{
	int date, time, calendarMonth, calendarYear, calendarDateAndMonth, calendarDateAndTime, calendarDate, calendarTime;
	int hour, minute, hash;                     // To be used in later part of program
	cout << "Give date(DDMMYYYY) and time (HHMM):";
	cin >> date >> time;                        // Suppose date is 22072014 and time is 1234
	calendarYear = date % 10000;                // 22072014 % 10000 = 2014
	calendarDateAndMonth = date / 10000;        // 22072014/10000 = 2207
	calendarMonth = calendarDateAndMonth % 100; // 2207 % 100 = 7
	calendarDate = calendarDateAndMonth / 100;  // 2207/100 = 22
	if ((calendarDate > 31)||(calendarDate<1)||(calendarMonth<1)||(calendarMonth>12)||(calendarYear<2014)){
		cout << "Bad date input." << endl; return -1;
	}
	// Further code comes here
	return 0;
}
