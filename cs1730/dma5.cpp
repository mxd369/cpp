
#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;

int g1;                            // allocate 1 int in bss segment
int g2 [10];                       // allocate 10 ints in bss segment

int main() {
  int s1;                          // allocate 1 int on stack
  int s2 [10];                     // allocate 10 ints on stack
  int * h1 = new int;              // allocate 1 int in heap
  int * h2 = new int [10];         // allocate 10 ints in heap 
  cout << "s1  = " << &s1 << endl; // 0x7f.. (stack)
  cout << "s2  = " << s2  << endl; // 0x7f.. (stack)
  cout << "g1  = " << &g1 << endl; // (bss segment)
  cout << "g2  = " << g2  << endl; // (bss segment)
  cout << "&h1 = " << &h1 << endl; // (stack)
  cout << "h1  = " << h1  << endl; // (heap)
  cout << "&h2 = " << &h2 << endl; // (stack)
  cout << "h2  = " << h2  << endl; // (heap)

  *h1 = 5;
  cout << "*h1 = " << *h1 << endl;

  delete h1;                       // deallocate memory at address stored in h1
  h1 = nullptr;                    // comment out this line for BUG below
  delete [] h2;
  h2 = nullptr;

  cout << "after deletes" << endl;
  cout << "h1  = " << h1  << endl;
  cout << "h2  = " << h2  << endl;

  /* BUG - shouldn't dereference deleted memory
  for (int i = 0; i < 100000; ++i) {
    cout << "*(h1+" << i << ") = " << *(h1+i) << endl;
  } // for
  */

  return EXIT_SUCCESS;
} // main