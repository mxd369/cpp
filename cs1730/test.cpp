#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;

int g1 = 2;   // allocate 1 int in data segment
int g2 [10];  // allocate 10 ints in bss segment

int main() {
  int s1;	// allocate 1 int on stack
  int s2 [10];				// allocate 10 int on stack
  cout << "s1 = " << &s1 << endl;	// 0x7f.. (stack)
  cout << "s2 = " << s2 << endl;	// 0x7f.. (stack)
  cout << "&g1 = " << &g1 << endl;	// (data segment)
  cout << "g2 = " << g2 << endl;	// (bss segment)
  return EXIT_SUCCESS;
} // MAIN
