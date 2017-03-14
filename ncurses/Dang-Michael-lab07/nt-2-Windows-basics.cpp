#include <ncurses.h>
using namespace std;

int main(int argc, char ** argv)
{
  // initializes the screen
  // sets up memory and clears the screen
  initscr();

  // waits for user input, returns int value of that key
  int c = getch();

  endwin();
  // deallocates memory and ends ncurses


  return 0;
}
