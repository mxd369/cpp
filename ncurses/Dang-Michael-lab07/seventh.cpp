#include <ncurses.h>

int main()
{
  initscr();
  // nodelay(stdscr, true);//it will not wait for user
  // curs_set(0); // cursor not there
  // usleep(1000000); // sleep for 1 second, needs #include <iostream> 
  keypad(stdscr,true);
  refresh();
  getch();
  endwin();
  return 0;
}
