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
	const double yuan_per_dollar   = 0.15;     // number of yuan in a dollar
	const double kroner_per_dollar = 0.15;   // number of kroner in a dollar
	int currency = 1;                        // currency in dollar
	char unit = 'a';                         // a space is not a unit
	cout<<"Please enter an amount followed by a unit (e for euro, y for yen,p for pound,u for yuan, for k for kroner):\n";
	cin>>currency>>unit;
	switch(unit) {
	case 'e':
		cout<<currency<<"euro == "<<currency*euros_per_dollar<<" euros\n";
	    break;
	case 'y':
		cout<<currency<<"yen == "<<currency*yen_per_dollar<<" yen\n";
	    break;
	case 'p':
		cout<<currency<<"pound =="<<currency*pounds_per_dollar<<" pounds\n";
	    break;
	case 'u':
		cout<<currency<<"yuan =="<<currency*yuan_per_dollar<<" yuan\n";
		break;
	case 'k':
	    cout<<currency<<"kroner =="<<currency*kroner_per_dollar<<" kroner\n";
	    break;
	default:
		cout<<"Sorry, I don't know a unit called '"<<unit<<"'\n";
        break;
	}
}