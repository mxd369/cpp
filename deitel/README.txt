working on:

=====ch3

complete:

in-progress:

	ex_3.11 Employee.h
	ex_3.11 EmployeeTest.cpp
	solution avail? class:  EmployeeSolution.h
					tester: EmployeeSolution.cpp

	ex_3.12 class:  Date.h
	ex_3.12 tester: DateTest.cpp
	solution avail? class:  DateSolution.h
					tester: DateTestSolution.cpp
	skeleton avail? yes see below
	output avail?
		$ ./DateTestSolution
		1/8/2006


=====ch4

complete:

in-progress:

=====ch5

complete:

in-progress:

=====ch6

complete:

in-progress:

=====ch7

complete:

in-progress:

=====ch8

complete:

in-progress:

=====ch9

complete:

in-progress:

=====ch10

complete:

in-progress:

=====ch22

complete:

in-progress:



------ch3 ex_12 start skeleton 12:36 AM 02/23/17

DateSolution.h
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

	}

	// function that sets Day
	void setDay(int dy)
	{
		
	}

	// function that sets the Year
	void setYear(int yr)
	{
		
	}
	/* ---------------------set functions------------------------*/
	/* ---------------------get functions------------------------*/
	
	/* ---------------------get functions------------------------*/
private:
	int month;	// Month for Date class
	int day;	// Day for Date class
	int year;	// Year for Date class
}// end of class definition, Employee

DateTestSolution.cpp
#include "DateSolution.h"
// function main begins program execution
int main()
{
	// Create two Employee Objects
	Date myDate(0, 8, 2006);

	// Display initial values of Date Object
	myDate.displayDate();

	return 0;// indicate program executed successfully
}// end of main function
------ch3 ex_12 end skeleton 12:36 AM 02/23/17