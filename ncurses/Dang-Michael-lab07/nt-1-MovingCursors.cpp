#include <ncurses.h>


int main(int argc, char ** argv)
{
  // cursor starts at 0,0 by default (top left corner)
  // y is the number of lines to go down
  // y as rows
  // x as the columns
  initscr(); // initializes the screen and sets up memory, clears the screen

  int x, y;
  x = y = 10;

  // moves the cursor to the specified location
  move(y, x); // ncurses y then x

  printw("Hello World!");// prints a string(const char *) to the window

  refresh(); // refreshes the screen to match whats in memory
  
  // get the actual value from user input
  int c = getch();   // waits for user input, returns int value of that key
  refresh();

  move(0,0);
  printw("%d", c);
  refresh();

  //move(0,0);// move the character printed out back to 0,0
  //mvprintw(0,0, "%d", c);

  //printw("%d", c);// in order to print out an int, have to use "%d"

  clear();// clears the screen

  getch();// get before it exits

  endwin();  // deallocates memory and ends ncurses


  return 0;
}
