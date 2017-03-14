#include <ncurses.h>
using namespace std;

int main(int argc, char ** argv)
{

  initscr(); // initializes the screen and sets up memory, clears the screen

  printw("Hello World!");// prints a string(const char *) to the window

  refresh(); // refreshes the screen to match whats in memory
  
  // get the actual value from user input
  int c = getch();   // waits for user input, returns int value of that key

  printw("%d", c);// in order to print out an int, have to use "%d"

  getch();// get before it exits

  endwin();  // deallocates memory and ends ncurses


  return 0;
}
