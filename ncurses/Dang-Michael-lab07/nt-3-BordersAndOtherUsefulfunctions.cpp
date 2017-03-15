#include <ncurses.h>

int main(int argc, char ** argv)
{
  // initializes the screen
  // sets up memory and clears the screen
  initscr();

  // use variables to limit confusion
  int height, width, start_y, start_x;
  height = 10;//10 lines height, not pixels
  width = 20;//
  start_y = 10;
  start_x = 10;

  // 1. create the window
  // window pointer
  WINDOW * win = newwin(height, width, start_y, start_x); // takes 4 parameters

  // 2. refresh so knows window is created
  //need to refresh the window after creating it
  refresh();

  // 3. make a box and display it
  // box: puts border around window, takes 3 params, window, int, int
  box(win, 0, 0);

  // 4. output to the window
  mvwprintw(win,1,1, "this is my box this is my box this is my box this is my box this is my box");//mvw 1,1 print below the box

  // will refresh the window recently created
  wrefresh(win);

  // waits for user input, returns int value of that key
  getch();

  // deallocates memory and ends ncurses
  endwin();

  return 0;
}
