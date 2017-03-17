#include "Editor.h"
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
	Editor ed;// added to the start of main
	string fn = "";

	// if-statements used to check for a filename
	if(argc > 1) {
		fn = string(argv[1]);				// set the filename
		ed = Editor(fn);
	}
	else {
		ed = Editor();
	}

	curses_init();					// Initialize ncurses
	
	// add the main while-loop
	while(ed.getMode() != 'x')
	{
		ed.updateStatus();
		ed.printStatusLine();
		ed.printBuff();
		int input = getch();		// Blocking until input
	 	ed.handleInput(input);
	}

	refresh();						// Refresh display
	endwin();						// End ncurses mode
	return 0;
}

