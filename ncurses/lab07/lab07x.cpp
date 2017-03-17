
int main(const int argc, const char * argv[])
{
	
}
/**
 * research: 
 */

/*
command line arguments:
accept user input,
provide the program input before it is actually running.
this way, no need to get additional input from user.
main accepts two parameters,
  argc and argv[]

example using mv:

mv        file.txt    ~/home/files/
|         |           |
command   argv[1]     argv[2]         = 3 arguments

=================================

argc:
Non-negative value representing the number of arguments passed
to the program from the enviro. in which the program is run.

(additional) argc = stands for argument count.
  integer(int) that contains the number of arguments, including the command itself.

=================================

argv:

(additional) argv = argument vector
  an array of characters (char) pointers that point to the arguments

  The first element (argv[0]) will always be the command; the last element (argv[argc]) will always be NULL

argv[0] -> mv
argv[1] -> file.txt
argv[2] -> ~/files/
argv[3] NULL


argv[0] -> will always contain the command that is being run
argv[1] -> first argument
argv[2] -> second argument
argv[3] -> last argument of argv will always be NULL


// nothing as main's parameter
int main(void)
{
  // program goes here
  return 0;
}

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


=================================

*/
