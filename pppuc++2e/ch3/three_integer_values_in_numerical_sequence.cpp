/*
6. Write a program that prompts the user to enter three integer values,
and then outputs the values in numerical sequence separated by commas.
So, if the user enters the values 10 4 6, the output should be 4, 6, 10.
If two values are the same, they should just be ordered together.
So, the input 454 should give 4, 4, 5.
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
	int val3 = 0;
    cout<<"Please enter three integer values: ";
	cin>>val1>>val2>>val3;
	//if (!cin) error("something went bad with the read");
	cout<<"Your val1 = "<<val1<<", Your val2 = "<<val2<<", Your val3 = "<<val3<<'\n';
	if(val1 < val2 && val1 < val3 && val3 > val2)
	{
		cout<<val1<<" , "<<val2<<" , "<<val3<<'\n';
	}
	else if (val2 < val1 && val2 < val3 && val1 < val3)
	{
		cout<<val2<<" , "<<val1<<" , "<<val3<<'\n';
	}
	else if (val3 < val1 && val3 < val2 && val1 > val2)
	{
		cout<<val3<<" , "<<val2<<" , "<<val1<<'\n';
	}
	else if (val1 < val2 && val1 > val3 && val3 < val2)
	{
		cout<<val3<<" , "<<val1<<" , "<<val2<<'\n';
	}
	else if (val1 < val2 && val2 > val3 && val3 < val2)
	{
		cout<<val1<<" , "<<val3<<" , "<<val2<<'\n';
	}
	else if (val1 > val2 && val1 > val2 && val2 < val3)
	{
		cout<<val2<<" , "<<val3<<" , "<<val1<<'\n';
	}
	else if (val1 == val2 && val2 == val3)
	{
		cout<<val1<<" , "<<val2<<" , "<<val3<<'\n';
	}
	else if (val1 == val2 && val3 < val1)
	{
		cout<<val3<<" , "<<val2<<" , "<<val1<<'\n';
	}
	else if (val1 == val2 && val3 > val1)
	{
		cout<<val1<<" , "<<val2<<" , "<<val3<<'\n';
	}
	else if (val2 == val3 && val1 < val2)
	{
		cout<<val1<<" , "<<val2<<" , "<<val3<<'\n';
	}
}
/*
would need to think of all possible combinations
then test for cases
*/