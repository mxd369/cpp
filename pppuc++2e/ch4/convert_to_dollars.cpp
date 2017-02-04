/*
model a program that converts yen, euros,
and pounds into dollars.
If you like realism, you can find conversion rates on
the web.
*/
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	const double euros_per_dollar  = 1.12;   // number of euros in a dollar
	const double yen_per_dollar    = 0.0086; // number of yen in a dollar
	const double pounds_per_dollar = 1.46;   // number of pounds in a dollar
	int currency = 1;                          // length in inches or centimeters
	char unit = ' ';                         // a space is not a unit
	cout<<"Please enter an amount followed by a unit (e or y or p):\n";
	cin>>currency>>unit;
	
	if (unit == 'e')
		cout<<currency<<"euro == "<<currency*euros_per_dollar<<" euros\n";
	else if (unit == 'y')
		cout<<currency<<"yen == "<<currency*yen_per_dollar<<" yen\n";
	else if (unit == 'p')
		cout<<currency<<"pound =="<<currency*pounds_per_dollar<<" pounds\n";
	else
		cout<<"Sorry, I don't know a unit called '"<<unit<<"'\n";
}