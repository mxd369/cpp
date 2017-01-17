#include<iostream>
using namespace std;
int main () {
   int a, b, c, num1, num2;
   cout << "Enter two numbers" << endl;
   cin >> num1 >> num2;
   if ( num1 > num2 ) {
      a = num1;
      b = num2;
   }
   else {
      a = num2;
      b = num1;
   }
   while (/*St1*/ b!=0) {
       /*St2*/ c = a % b;
      a = b;
      b = c;
   }
   cout << a << endl;
   return 0;
}
/*
=================================
If we replace St1 with 'a!=0', St2 with 'c = b % a;', 
then the program will always compute the GCD of numbers 'num1' and 'num2' 
and store in variable 'b'.

 If we replace St1 with 'b!=0', and St2 with 'c = a % b;', 
then the program will always compute the GCD of numbers 'num1' and 'num2' 
and store in variable 'a'.

 If we replace St1 with 'b!=0', and St2 with 'c = a % b;',
then the program does not necessarily compute the GCD of numbers 'num1' and 'num2' 
and store in variable 'a'.

 If we replace St1 with 'a!=0', and St2 with 'c = b % a;',
then the program will always compute the GCD of numbers 'num1' and 'num2' 
and store in variable 'a'.
=================================
*/