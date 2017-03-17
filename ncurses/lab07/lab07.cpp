/*
Write a C++ program that displays the contents of a file in curses mode.
If the contents of the file are too big to fit on the screen,
then your program needs to allow the user to scroll through the output
using the up and down arrow keys.
*/
/*
#include <ncurses.h>

int main(const int argc, const char * argv [])
{
	initscr();// initialize the screen, sets up memory and clears the screen
	printw("Test");// prints a string(const char *) to a window
	refresh();// refreshes the screen to match whats in memory
	getch();// 
	cbreak();// ctrl-c exits out of ncurses program
	endwin();// deallocates memory and ends ncurses
	return 0;
}
*/
#include <fstream>
#include <iostream>
#include <string>
#include <ncurses.h>


class ncursewrap
{
    public:
    ncursewrap()   { initscr();    }
    ~ncursewrap()  { endwin();     }
    void refresh() { ::refresh();  }
};


int main(const int argc, const char * argv [])
{
    std::ifstream inputfile("filename.txt");
    std::string line;

    ncursewrap nc;

    if(inputfile.is_open())
    {
        while (inputfile >> line)
        {
            printw("%s ", line.c_str());
        }
    } else
    {
        printw("didnt find file `filename.txt`\n");
    }

    nc.refresh();
    refresh();
    std::cin.ignore();
}