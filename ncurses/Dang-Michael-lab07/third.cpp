// get user input
#include <ncurses.h>

int main()
{
  initscr();
  noecho();
  raw();
  int c;
  printw("Write something (ESC to escape): ");
  while((c=getch())!=27)
  {
    move(10,0);
    printw("Keycode: %d, and the character: %c",c,c);//d=decimal(wholeNumber)
    move(0,0);
    printw("Write something (ESC to escape): ");
    refresh();
  }
  endwin();
  return 0;
}
