#include <ncurses.h>
// y = down
// x = across
// move() two coordinates y and x
// imagine the screen as a multi-dimensional array
int main()
{
  initscr();
  //move(y,x, "hello World");
  //move(5,10);// move the cursor
  //printw("Hello");
  mvprintw(6,10,"Hello World");
  refresh();
  getch();
  endwin();
  return 0;
}
