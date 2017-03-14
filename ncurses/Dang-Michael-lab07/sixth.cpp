#include <ncurses.h>

int main()
{
  initscr();
  // start_color();
  // init_pair(1,COLOR_RED,COLOR_BLACK);
  // attron(COLOR_PAIR(1));
  // printw("Something");
  // attroff(COLOR_PAIR(1));
  
  WINDOW* win;
  // window you can intialize
  win=newwin(10, 10, 10, 10);
  wrefresh(win);
  delwin(win);

  refresh();
  getch();
  endwin();
  return 0;
}
