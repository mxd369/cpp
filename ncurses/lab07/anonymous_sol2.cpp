#include <fstream>
#include <iostream>
#include <ncurses.h>

using namespace std;

WINDOW *create_newwin(int height, int width);
void destroy_win(WINDOW *local_win);

int main (const int argc, char *argv[] )
{

WINDOW *my_win;
   int width, height;
   int ch;

   initscr();          
   cbreak();          
                     
   keypad(stdscr, TRUE);      

   height = 3;
   width = 10;
   refresh();
   my_win = create_newwin(height, width);

   while((ch = getch()) != KEY_F(1))
   {   switch(ch)
       {  
           case KEY_UP:
               destroy_win(my_win);
               my_win = create_newwin(height—-, width);
               break;
           case KEY_DOWN:
               destroy_win(my_win);
               my_win = create_newwin(height++ , width);
               break;  
       }
   }

if ( argc != 2 ) // argc should be 2 for correct execution
// We print argv[0] assuming it is the program name
cout<<"usage: "<< argv[0] <<" <filename>\n";
else {
// We assume argv[1] is a filename to open
ifstream the_file ( argv[1] );
// Always check to see if file opening succeeded
if ( !the_file.is_open() )
cout<<"Could not open file\n";
else {
char x;
// the_file.get ( x ) returns false if the end of the file
// is reached or an error occurs
while ( the_file.get ( x ) )
cout<< x;
}
// the_file is closed implicitly here
}

endwin();

return 0;

}