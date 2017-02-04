/*
three_strings_in_alphabetical_order.cpp
7. Do exercise 6, but with three string values.
So, if the user enters the values "Steinbeck", "Hemingway", "Fitzgerald ",
the output should be "Filzgerald, Hemingway, Steinbeck".
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	string name1 = " ";
	string name2 = " ";
	string name3 = " ";
	cout<<"please enter three strings ";
	cin>>name1>>name2>>name3;
	cout<<"name1 = "<<name1<<", name2 = "<<name2<<", name3 = "<<name3<<'\n';
	if([name1:0] > [name2:0])
	{
		cout<<name1;
	}
}