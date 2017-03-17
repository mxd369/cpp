#include <stdio.h>
// in order to use command line arguments
int main(int argc, char* argv[])
{
  // to access the entire element from argv
  // which are your arguments,
  // simply iterate, or loop, through the array like this
  for (int i = 0; i < argc; i++)
    printf("argv[%d] is: %s\n", i, argv[i]);
  //i=current iteration of the loop,
  //argv[i] representation of the current command-line argument
  //run it with two args, will see the two args being displayed
  return 0;
}