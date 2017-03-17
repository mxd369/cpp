#include <ncurses.h>
#include <string>

using namespace std;

void curses_init()
{
	initscr();						// Start ncurses mode
	noecho();						// Don't echo keystrokes
	cbreak();						// Disable line buffering
	keypad(stdscr, true);			// Enable special keys to be recorded
}

int main(int argc, char* argv[])
{
	string fn = "";
	if(argc > 1)
	{
		fn = argv[1];				// set the filename
	}

	curses_init();					// Initialize ncurses

	refresh();						// Refresh display
	endwin();						// End ncurses mode
	return 0;
}

