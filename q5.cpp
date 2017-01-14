#include<iostream>
using namespace std ;
int main () {
   int n ;
   cout << " Give n : " ;
   cin >> n ;
   if ( n < 0) {
      switch ( n ) {
         case 0:
            cout << " so " ;
         case -1: 
            cout << " how is your " ;
         case -10: 
            cout << " parrot 's " ;
         break ;
         default : 
            cout << " cat 's " ;
      }
      cout << " health ? " ;
   }
   else {
      switch ( n ) {
         case 0: 
            cout << " so " ;
         case 1: 
            cout << " how is your " ;
         case 10: 
            cout << " cat 's " ;
         default : 
            cout << " health ? " ;
      }
   }
   cout << endl ;
   return 0;
}