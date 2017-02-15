#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;

int g1 = 2;   				// allocate 1 int in data segment
int g2 [10];  				// allocate 10 ints in bss segment

int main() {
  int s1;				// allocate 1 int on stack
  int s2 [10];				// allocate 10 int on stack
  int * h1 = new int;			// allocate 1 int in heap
  int * h2 = new int [10];		// allocate 10 ints in heap
  cout << "s1  = " << &s1 << endl;	// 0x7f.. (stack)
  cout << "s2  = " << s2  << endl;	// 0x7f.. (stack)
  cout << "&g1 = " << &g1 << endl;	// (bss segment)
  cout << "g2  = " << g2  << endl;	// (bss segment)
  cout << "&h1 = " << &h1 << endl;	// (stack) 
  cout << "h1 =  " << h1  << endl;	// (heap)
  cout << "&h2 = " << &h2 << endl;	// (stack)
  cout << "h2 =  " << h2  << endl;	// (heap)


  cout << "sizeof s1 = " << sizeof s1 << endl;



  delete h1;				// deallocate memory at address stored in h1
  h1 = nullptr;
  cout << "h1 = " << h1 << endl;
  return EXIT_SUCCESS;

} // MAIN
/*
Memory Layout of C++ Program
1) text segment - program instructions / code
2) data segment - initialized global / static variables       -------- automatically allocated and deallocated
3) bss segment - uninitialized global / static variables      --------
4) stack - loval variables ( usually near address 0x7f...)    --------
5) heap - dynamically allocated memory
*/
