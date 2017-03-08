#include <iostream>
using namespace std;

int main(){
  int A = 4;
  while(A > 0){
    switch(A--){
      case 1: cout << "1";
      break;
      case 2: cout << "2";
      case 3: cout << "3";
      case 4: cout << "4";
      break;
    }
  }
return 0;
}

//4
print 4 and break control back to the loop
//3
print 3 and no break so print 4
//2
print 2 and no break so print 34
//1
print 1 and break control back to the loop
//0
terminate
	
4342341
	
4342341
EXPLANATION

When 'switch-case' is used, after every 'case', 'break' statement needs to be written.
If we do not use 'break' statement for every case,
the program control will simply fall through to the next case i.e. it will execute all the cases,
till a 'break' statement is encountered.

------------------------------------------------------------------
 When A =        Output Is         Reason
------------------------------------------------------------------
   4              4            After printing '4', 
                               'break' statement is encountered, 
                               which exits from 'switch', and 
                               the control again goes to 
                               the beginning of the while loop
------------------------------------------------------------------
   3              34           After printing '3', 
                               there is no 'break' statement, 
                               hence, '4' is also printed.
------------------------------------------------------------------
   2              234          After printing '2', 
                               there is no break statement, 
                               hence, '3' is also printed, 
                               which is followed by '4'
------------------------------------------------------------------
   1              1            After priting '1', 
                               'break' statement is encountered, 
                               which exits from 'switch', and 
                               the control goes to the 
                               beginning of the while loop. 
------------------------------------------------------------------
   0                           The while loop itself terminates
------------------------------------------------------------------

