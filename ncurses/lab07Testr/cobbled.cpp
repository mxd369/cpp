WINDOW *mypad = newpad(rows, cols);




you need fresh your window before the switch statement
	
if you use newwin, use refresh(),


if you use newpad, use prefresh()

WINDOW * padname = newpad(padYsize,padXsize)

then you print everything in your pad, use wprintw


Did you use prefresh()?
after you print everything
you need use prefresh to refresh the screen

outside your loop, but before your switch statement

pad = 100x100


your pad xsize should smaller than your stdscr
 2
use function getmaxyx to get yMax and xMax

U need 7 arguments
prefresh (yourPad, line, 0, 0, 0, termRow, termCol);


Create an int that u can increment and decrement each time the user presses up or down in a while loop.


input = wgetch(pad); 



its hard to say without to see your code
sometime will be the size problem
 1
which happen in your pad size or prefresh
	 
	 
===============
	newpad.c