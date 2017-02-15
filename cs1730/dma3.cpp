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
  cout << "&s1 = " << &s1 << endl; // 0x7f.. (stack)
  cout << "s2  = " << s2  << endl; // 0x7f.. (stack)
  cout << "&g1 = " << &g1 << endl; // (bss segment)
  cout << "g2  = " << g2  << endl; // (bss segment)
  cout << "&h1 = " << &h1 << endl; // (stack)
  cout << "h1  = " << h1  << endl; // (heap)
  cout << "&h2 = " << &h2 << endl; // (stack)
  cout << "h2  = " << h2  << endl; // (heap)
  return EXIT_SUCCESS;
} // main
