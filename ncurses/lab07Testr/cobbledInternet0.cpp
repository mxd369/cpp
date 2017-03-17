#include <fstream>
#include <iostream>
#include <ncurses.h>
using namespace std;


int main(const int argc, const char * argv [])
{

initscr();	/* Start curses mode */
noecho();

if ( argc == 2 ) {

ifstream the_file ( argv[1] );

char x;

while ( the_file.get ( x ) )
addch(x); 
}
refresh();
getch();
endwin();	/* End curses mode	*/
return 0;
}