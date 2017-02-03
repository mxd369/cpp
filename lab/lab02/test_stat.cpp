/*
stat.cpp:
Let the user input a one or more integers, space separated, on a single line (as seen below), then work out and display the sum, average, sum of squares and population variance of the numbers. Remember, you do not need nor should you use an array to solve this problem.

Enter integers: 2 4 1 3
           Sum: 10.0
       Average: 2.5
Sum of Squares: 30.0
      Variance: 1.25
*/
#include<iostream>
using namespace std;

int main()
{
	int n, i,num;
	double squareSum = 0,sum =0 , avg,variance;
	cout<<"Enter the number you want to enter: ";
	cin>>n;
	cout<<"Enter integers: ";
	for(i=0; i<n; i++)
	{
		cin>>num;
		sum = sum+ num;
		squareSum = squareSum +(num*num);
	}//end of main function
	avg = sum/n;
	variance = (squareSum)/n - avg*avg;
	cout<<"Sum: "<<sum<<endl;
	cout<<"Average: "<<avg<<endl;
	cout<<"Sum of squares: "<<squareSum<<endl;
	cout<<"Variance: "<<variance<<endl;

	return 0;
}//end of main function

