#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;

int main(){

  char a = '1';
  
  cout << "(a) char      = " << sizeof(a) << '\n';
  cout << "(b) char &    = " << sizeof(&a) << '\n';
  //cout << "(c) char *  = "   << sizeof(a * ) << '\n';
  //cout << "(d) short   = " << sizeof x << '\n';
  //cout << "(e) short & = " << sizeof x << '\n';
  //cout << "(f) short * = " << sizeof x << '\n';
  //cout << "(g) int     = " << sizeof x << '\n';
  //cout << "(h) int &   = " << sizeof x << '\n';
  //cout << "(i) int *   = " << sizeof x << '\n';
  //cout << "(j) long    = " << sizeof x << '\n';
  //cout << "(k) long &  = " << sizeof x << '\n';
  //cout << "(l) long *  = " << sizeof x << '\n';
  //cout << "(m) int **  = " << sizeof x << '\n';
  //cout << "(n) int *** = " << sizeof x << '\n';

  return 0;
}
/*
(a) char
(b) char &
(c) char *
(d) short
(e) short &
(f) short *
(g) int
(h) int &
(i) int *
(j) long
(k) long &
(l) long *
(m) int **
(n) int ***
*/
