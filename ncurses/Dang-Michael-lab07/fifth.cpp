#include <ncurses.h>

int main()
{
  initscr();
  start_color();// coloring in the terminal
  init_pair(1, COLOR_RED, COLOR_BLACK);// first color, there are 0-7 <- 8 colors
  attron(COLOR_PAIR(1));
  printw("Something");
  attroff(COLOR_PAIR(1));
  refresh();
  getch();
  endwin();
  return 0;
}
