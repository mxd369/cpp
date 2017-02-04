/*
4. Write a program that prompts the user to enter two integer values.
Store these values in int variables named val1 and val2.
Write your program to determine the smallest, 
largest,
sum,
difference,
product,
and ratio of these values and report them to the user.	
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	cout<<"Enter two integer values ";
	int val1 = 0;
	int val2 = 0;
	cin>>val1;
	cin>>val2;
	//test input from user
	cout<<"You first entered: "<<val2<<'\n';
	cout<<"Then you entered: "<<val1<<'\n';
	
	//smallest
	cout<<"'Smallest Comparison'\n";
	if(val1 < val2)
	{
		cout<<val1<<" which is val1 is smaller than val2 which is "<<val2<<'\n';
	}
	else
	{
		cout<<val2<<" which is val2 is smaller than val1 which is "<<val1<<'\n';
	}

	//largest
	cout<<"'largest Comparison'\n";
	if(val1 > val2)
	{
		cout<<val1<<" which is val1 is greater than val2 which is "<<val2<<'\n';
	}
	else
	{
		cout<<val2<<" which is val2 is greater than val1 which is "<<val1<<'\n';
	}
	
	//sum
	cout<<"'Sum'\n";
	cout<<"The sum of val1 and val2 is "<<val1 + val2<<'\n';
	
	//difference
	cout<<"'Difference'\n";
	cout<<"The difference between val1 and val2 is "<<val1-val2<<'\n';
	cout<<"The difference between val2 and val1 is "<<val2-val1<<'\n';
	
	//product
	cout<<"'Product'\n";
	cout<<"The product of val1 and val2 is "<<val2*val1<<'\n';
	
	//ratio
    cout<<"'Ratio'\n";
	cout<<"The ratio of val1 and val2 is "<<val1/val2<<" or also "<<val1<<" to "<<val2<<'\n';
	cout<<"The ratio of val2 and val1 is "<<val2/val1<<" or also "<<val2<<" to "<<val1<<'\n';
}