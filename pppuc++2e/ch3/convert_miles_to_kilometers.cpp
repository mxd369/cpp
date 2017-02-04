#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	cout<<"enter a number of kilometers to be converted to miles: ";
	double kilometer = 0;
	cin>>kilometer;
	double mile = kilometer * 1.609;
	cout<<"Your kilometers converted to miles are: "<<mile<<'\n';
}