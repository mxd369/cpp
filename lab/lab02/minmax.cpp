#include<iostream>
using namespace std;

int main()
{
	int n;
	int minimum = 99999;
	int maximum = -1;
	int i;
	int num;

	cout<<"Enter the number you want to enter: ";
	cin>>n;
	cout<<"Enter integers: ";
	for(i=0; i<n; i++)
	{
		cin>>num;
		if(num<minimum)
			minimum = num;
		if(num>maximum)
			maximum = num;
	}

	cout<<"Minimum: "<<minimum<<endl;
	cout<<"Maximum: "<<maximum<<endl;
	return 0;
}//end of main function