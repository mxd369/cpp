/*
get the maximum width and
height of the terminal and
how to turn on and off the attributes

*/
#include <ncurses.h>

int main()
{
  initscr();
  int x, y;
  getmaxyx(stdscr,y,x);//
  // write something to the screen
  move(y/2,x/2);// move the center of the screen
  // attribute
  //attron(A_BOLD);// makes a char bold
  attron(A_REVERSE);
  printw("a");// will write out a to the center of the screen
  //attroff(A_BOLD);// ends the bold attr
  attroff(A_REVERSE);//good for making menus
  refresh();
  getch();
  endwin();
  return 0;
}
