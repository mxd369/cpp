/*
 * Write a C++ program that displays the contents of a file in curses mode.
 * If the contents of the file are too big to fit on the screen,
 * then your program needs to allow the user to scroll through the output
 * using the up and down arrow keys.
 */

/*
 * #include <ncurses.h>
 *
 * int main(const int argc, const char * argv [])
 * {
 * initscr();// initialize the screen, sets up memory and clears the screen
 * printw("Test");// prints a string(const char *) to a window
 * refresh();// refreshes the screen to match whats in memory
 * getch();// 
 * cbreak();// ctrl-c exits out of ncurses program
 * endwin();// deallocates memory and ends ncurses
 * return 0;
 * }
 */

#include <ncurses.h>

#include <iostream> // need for read, does ncurses auto include 
#include <fstream>  // supa mike said: can use fstream
#include <string.h> // does ncurses auto include string 

// using c: auto includes stdio.h, unctrl.h, stdarg.h, stddef.h

class NCurses {
public:
    NCurses() {
        initscr(); // initializes NCurses, does not clear the terminal screen
        // sets up internal memory structures and interfaces between NCurses functions
        // and computer's terminal I/O
    }

    // current screen
    // stdscr standard screen

    ~NCurses() {
        endwin();
    }
    void refresh() {
        ::refresh(); // required to update text on the terminal window
        // allows user to see what NCurses has done
        // checks for new text output by NCurses and updates text on current screen
    }
};

// need to enable scrolling, what does that take?
// guess:
//   need to declare a screen size
//   need keyboard
//   dont want to implement pad solution

int main(const int argc, const char * argv []) {

    std::ifstream inputfile("filename.txt");
    std::string line;

    NCurses N;
    
    // read in the file
    if(inputfile.is_open())
    {
        while (inputfile >> line)
        {
            printw("%s ", line.c_str());
        }
    } else
    {
        printw("err no file called:'filename.txt'\n");
    }

    N.refresh(); // method call: refresh the screen
    refresh();
    std::cin.ignore();
}

/*
commannd line arguments:
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
