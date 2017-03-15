#include <ncurses.h>
#include <string>
using namespace std;
void start_ncurses(bool useRaw, bool useNoecho);
void printMenu(WINDOW * menu, string choices[], int size, int hightlight);

int main(int argc, char ** argv)
{
	/* NCURSES START */
	initscr();
	noecho();
	cbreak();

	// get screen size
	int yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);

	// create a window for our input
	WINDOW * inputwin = newwin(6, xMax-12, yMax-8, 5);
	box(inputwin, 0, 0);
	refresh();
	wrefresh(inputwin);
	keypad(inputwin, true);

	// make sur eprgram waits before exiting...
	getch();
	endwin();
	/* NCURSES END */

	return 0;
}