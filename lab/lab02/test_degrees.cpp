//degree to fahrenheit
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
float cel,fahren;
cout<<"Enter the temperature in celcius: ";
cin>>cel;

fahren = (9.0/5)*cel + 32;
cout<<fixed<<setprecision(2)<<cel<< " degrees Celcius converts to "<<fixed<<setprecision(2)<<fahren<<" degrees Fahrenheit";
return 0;

}//end of main function