/*
Exercise 4:
Write a program that prompts the user to enter two integer values.
Store these values in int variables named val1 and val2.
Write your program to determine the smallest, largest, sum,
difference, product, and ratio of these values and report them to the user.
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
int main()
{
	int val1 = 0;
	int val2 = 0;

	cout<<"Please type in 2 integer values for example 8 and 3: "<<'\n';
	cin>>val1>>val2;
	
	//smallest
	if(val1<val2){
	    cout<<"The smallest is: "<<val1<<'\n';
	} else {
		cout<<"The smallest is: "<<val2<<'\n';
	}
	
	//largest
	if(val1>val2){
		cout<<"The largest is "<<val1<<'\n';
	} else {
		cout<<"The largest is "<<val2<<'\n';
	}
	//sum
	int sum = val1 + val2;
	cout<<"The sum is: "<<sum<<'\n'; 
	
	//difference
	int difference = val1 - val2;
	cout<<"The difference is: "<<difference<<'\n'; 
	
	//product
	int product = val1 * val2;
	cout<<"The sum is: "<<product<<'\n'; 
	
	//ratio
	int ratio = val1 / val2;
	cout<<"The ratio is: "<<ratio<<'\n'; 
}