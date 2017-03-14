/*
Hello world using ncurses library
*/
#include <ncurses.h>// include the ncurses libray
int main()
{
    // 1. initialize the screen
    initscr();
    // 3. write out something
    printw("Hello World");
    // 4. add the refresh function
    refresh();// writes everything in advanced, directly to the screen
    // 5. wait until the user enters a char
    getch();
    // 2. deallocate the memory
    endwin();
    return 0;
}
