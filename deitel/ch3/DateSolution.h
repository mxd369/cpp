/*
Define Date Class with three data members and member functions to set and get its values
*/

// Create and manipulate a Date object

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Date class definition
class Date
{
public:
	/* ---------------------constructor------------------------*/
	// constructor for Date class
	Date(int mymonth, int dy, int yr)
	{
		setMonth(mymonth);
		setDay(dy);
		setYear(yr);
	}
	/* ---------------------constructor------------------------*/
	/* ---------------------set functions------------------------*/
	// function that sets the Month
	void setMonth(int mymonth)
	{
		// store the Month in the object
		if (mymonth < 1)
			month = 1;
		if (mymonth > 1)
		{
			if (mymonth > 12)
				month = 1;
			if (mymonth < 12)
				month = mymonth; // store the Month in the object
		}
	} // end of function setMonth

	// function that sets Day
	void setDay(int dy)
	{
		// store the Day in the object
		day = dy;
	}// end of function setDay

	// function that sets the Year
	void setYear(int yr)
	{
		year = yr;
	}// end of function setYear
	/* ---------------------set functions------------------------*/
	/* ---------------------get functions------------------------*/
	// function that gets the Month
	int getMonth()
	{
		return month; // return object's month
	}// end of function getMonth

	// function that gets the Day
	int getDay()
	{
		return day; // return the object's day
	} // end of function get Day

	// function that gets the Year
	int getYear()
	{
		return year; // return the object's year
	} // end of function get Year
	/* ---------------------get functions------------------------*/
	/* ---------------------display functions------------------------*/
	void displayDate()
	{
		cout << getMonth() << "/" << getDay() << "/" << getYear() << endl;
	}
	/* ---------------------display functions------------------------*/
private:
	int month;	// Month for Date class
	int day;	// Day for Date class
	int year;	// Year for Date class
};// end of class definition, Employee