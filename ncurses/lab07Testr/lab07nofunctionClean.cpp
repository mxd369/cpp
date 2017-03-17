#include <ncurses.h>
#include <iostream> // need for read, does ncurses auto include 
#include <fstream>  // supa mike said: can use fstream
#include <string.h> // does ncurses auto include string


int main(const int argc, const char * argv []) {




    std::ifstream inputfile("filename.txt");
    std::string line;

    // test keyboard
    int ch;

    initscr();
    //box(stdscr,0,0); no need for box


    // read in the file
    if(inputfile.is_open()){
        while (inputfile >> line) {
            printw("%s ", line.c_str());
        }
    } else {
        printw("Error, no file was found \n");
    }
	
	
	
	// test keyboard
	keypad(stdscr,TRUE);
	do
	{
		ch = getch();
		switch(ch)
		{
			case KEY_DOWN:
				addstr("Down\n");
				break;
			case KEY_UP:
				addstr("Up\n");
				break;
			default:
				break;
		}
		refresh();
	} while(ch != '\n');
	// test keyboard
	
	

    refresh();
	
	
	
	getchar();

    std::cin.ignore();

	endwin();
	return 0;
}




/*

base program
  no scroll
  no set screen dimensions

#include <ncurses.h>
#include <iostream> // need for read, does ncurses auto include 
#include <fstream>  // supa mike said: can use fstream
#include <string.h> // does ncurses auto include string


int main(const int argc, const char * argv []) {

    std::ifstream inputfile("filename.txt");
    std::string line;

    //NCurses N;
    initscr();
    // read in the file
    if(inputfile.is_open()){
        while (inputfile >> line) {
            printw("%s ", line.c_str());
        }
    } else {
        printw("err. no file called:'filename.txt'\n");
    }

    refresh();

    std::cin.ignore();

	endwin();
	return 0;
}

*/