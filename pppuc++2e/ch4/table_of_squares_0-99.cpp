/*
calculate and print a table of squares 0-99
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int square(int x)  //return the square of x
{
	return x*x;
}

int main()
{
    // calculate and print a table of squares of even numbers in the [0:100) range
	for(int i = 0; i<100;i+=2)
		cout<<i<<'\t'<<square(i)<<'\n';
	
	cout<<square(2)<<'\n';  // print 4
	cout<<square(10)<<'\n'; // print 100
}