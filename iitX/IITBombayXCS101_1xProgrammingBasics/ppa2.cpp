/*
Find the sum of squares of individual digits of a number 'sqdnumber'
and store the sum in variable 'sqdNumber_result'.
E.g.
if the number is 234,
the sum is computed as (2^2 + 3^2 + 4^2 = 4 + 9 + 16 = 29) 
*/

#include <iostream>
using namespace std;

int main()
{
  int a;
  int sqdnumber;        //sum of squares of individual digits of a number
  int sqdNumber_result; //sum storage;
  
  cin >> a;
  
  sqdnumber = a * a;


  sqdNumber_result = sqdnumber;
  cout<< "sqdNumber_result: " << sqdNumber_result << endl;
  

  return 0;  
}
