/*
time.cpp:
Given as input an integer number of seconds, print as output the equivalent time in hours, minutes and seconds.

Enter in the number of seconds as an integer: 7322
7322 seconds is equivalent to 2 hours 2 minutes 2 seconds.
*/
//seconds into hours
#include<iostream>
using namespace std;

int main()
{
int sec, hr, minute,d;
cout<<"Enter the number of seconds: ";
cin>>sec;
d =sec;
hr = sec/3600;
sec = sec%3600;
minute = sec/60;
sec = sec%60;
cout<<d<<" seconds is equivalent to "<<hr<<" hours "<<minute<<" minutes "<<sec<<" seconds.";
return 0;
}//end of main function