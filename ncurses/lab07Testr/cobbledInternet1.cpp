// http://www.cplusplus.com/forum/general/211197/

/*
So after displaying the text file on ncurses,
its suppose to allow users to scroll through the content using up and down arrow keys.
But for some reason, when i press arrow keys, the contents disappears.
I am new to ncurses and have no idea what is wrong...
*/

#include <fstream>
#include <iostream>
#include <ncurses.h>

using namespace std;

WINDOW *newwindow(int height, int width, int starty, int x);
void dwindow(WINDOW *local_win);

WINDOW *newwindow(int height, int width, int starty, int x){
	WINDOW *local_win;
	local_win = newwin(height, width, starty, x);
	wrefresh(local_win);
	return local_win;
}

int main(const int argc, const char * argv []) {

	initscr();
	noecho();
	cbreak();

	WINDOW *my_win;
	int x;
	int starty;
	int width;
	int height;
	int ch;

	keypad(stdscr, true);

	height = 0;
	width = 0;
	starty = height;
	x = width;
	refresh();
	my_win = newwindow(height, width, starty, x);




	printw("Press F1 to exit\n");
	printw("");

	if ( argc == 2 ) {
		ifstream the_file ( argv[1] );
		char x;
		while ( the_file.get ( x ) )
			addch(x);
	}

	while((ch = getch()) != KEY_F(1)){
		switch(ch){
			case KEY_UP:
			dwindow(my_win);
			my_win = newwindow(height, width, starty--, x);
			break;
			case KEY_DOWN:
			dwindow(my_win);
			my_win = newwindow(height, width, starty++ ,x);
			break;	
		}
	}

	endwin();
	return 0;
}

void dwindow(WINDOW *local_win){
	delwin(local_win);
}

