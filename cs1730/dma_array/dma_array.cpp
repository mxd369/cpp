
#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

typedef unsigned int uint;

int main() {

  /* sample program that creates and destroys a dynamically allocated 
   * two-dimensional array */

  uint rows = 3;
  uint cols = 5;

  // allocate in dimension order
  double ** x = new double * [rows]; // allocate 1st dimension
  for (uint i = 0; i < rows; ++i) {  // allocate 2nd dimension
    x[i] = new double [cols];
  } // for

  // do stuff

  // deallocate in reverse order
  for (uint i = 0; i < rows; ++i) {  // deallocate 2nd dimension
    delete [] x[i];
  } // for
  delete [] x;                       // deallocate 1st dimension
  
  return EXIT_SUCCESS;

} // main

