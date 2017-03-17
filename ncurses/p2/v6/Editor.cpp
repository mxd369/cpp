// implementing the Editor class
#include "Editor.h"

#include <fstream>
#include <iostream>
#include <sstream>

// default constructor
Editor::Editor()
{
	x=0;
	y=0;
	mode='n';
	status = "Normal Mode";
	filename = "untitled";

	/* Intializes buffer and appends line to prevent seg. faults */
	buff = new Buffer();
	buff->appendLine("");
}

// give file name, read it into the buffer
Editor::Editor(string fn)
{
    x=0;y=0;mode='n';
    status = "Normal Mode";
    filename = fn;

    buff = new Buffer();

    ifstream infile(fn.c_str());
    if(infile.is_open())
    {
        while(!infile.eof())
        {
            string temp;
            getline(infile, temp);
            buff->appendLine(temp);
        }
    }
    else
    {
        cerr << "Cannot open file: '" << fn << "'\n";
        buff->appendLine("");
    }
}

// core functions
/*
Now that we have done all that,
it is time for us to get on with the core functions,
starting with Editor::updateStatus().
*/
void Editor::updateStatus()
{
    switch(mode)
    {
    case 'n':
        // Normal mode
        status = "Normal Mode";
        break;
    case 'i':
        // Insert mode
        status = "Insert Mode";
        break;
    case 'x':
        // Exiting
        status = "Exiting";
        break;
    }
    status += "\tCOL: " + tos(x) + "\tROW: " + tos(y);
}

/*
We haven’t defined tos(int)
use stringstream
*/
// Note: this isn’t necessary if you have C++11 - you just use std::to_string(int)
string Editor::tos(int i)
{
    stringstream ss;
    ss << i;
    return ss.str();
}
// Note: this isn’t necessary if you have C++11 - you just use std::to_string(int)

/*
Basic Input Handling
My input handler handles all inputs in normal mode as well as insert mode
(but not exit mode, because you are exiting the program).
This may be confusing because there are a bunch of switches, and you may be right.
You could separate the input handler into two different functions -
one for handling inputs in normal mode, the other handling inputs in insert mode.
*/
void Editor::handleInput(int c)
{
    switch(c)
    {
    case KEY_LEFT:
        moveLeft();
        return;
    case KEY_RIGHT:
        moveRight();
        return;
    case KEY_UP:
        moveUp();
        return;
    case KEY_DOWN:
        moveDown();
        return;
    }
    switch(mode)
    {
    case 'n':
        switch(c)
        {
        case 'x':
            // Press 'x' to exit
            mode = 'x';
            break;
        case 'i':
            // Press 'i' to enter insert mode
            mode = 'i';
            break;
        case 's':
            // Press 's' to save the current file
            saveFile();
            break;
        }
        break;
    case 'i':
        switch(c)
        {
        case 27:
            // The Escape/Alt key
            mode = 'n';
            break;
        case 127:
        case KEY_BACKSPACE:
            // The Backspace key
            if(x == 0 && y > 0)
            {
                x = buff->lines[y-1].length();
                // Bring the line down
                buff->lines[y-1] += buff->lines[y];
                // Delete the current line
                deleteLine();
                moveUp();
            }
            else
            {
                // Removes a character
                buff->lines[y].erase(--x, 1);
            }
            break;
        case KEY_DC:
            // The Delete key
            if(x == buff->lines[y].length() && y != buff->lines.size() - 1)
            {
                // Bring the line down
                buff->lines[y] += buff->lines[y+1];
                // Delete the line
                deleteLine(y+1);
            }
            else
            {
                buff->lines[y].erase(x, 1);
            }
            break;
        case KEY_ENTER:
        case 10:
            // The Enter key
            // Bring the rest of the line down
            if(x < buff->lines[y].length())
            {
                // Put the rest of the line on a new line
                buff->insertLine(buff->lines[y].substr(x, buff->lines[y].length() - x), y + 1);
                // Remove that part of the line
                buff->lines[y].erase(x, buff->lines[y].length() - x);
            }
            else
            {
                buff->insertLine("", y+1);
            }
            x = 0;
            moveDown();
            break;
        case KEY_BTAB:
        case KEY_CTAB:
        case KEY_STAB:
        case KEY_CATAB:
        case 9:
            // The Tab key
            buff->lines[y].insert(x, 4, ' ');
            x += 4;
            break;
        default:
            // Any other character
            buff->lines[y].insert(x, 1, char(c));
            x++;
            break;
        }
        break;
    }
}


/* Start
Pretty straight forward, although I think I need to do a bit of explaining
on the if(x >= buff->lines[y].length()) part.
You see, if it didn’t have that, then when the user goes up or down,
if the current line of text was longer than the one above/below it,
then the cursor would be ‘dangling in midair’, so to speak.
This little if-statement snaps the cursor to the end of the next/previous
line if it were to be shorter than the current one.
*/
void Editor::moveLeft()
{
    if(x-1 >= 0)
    {
        x--;
        move(y, x);
    }
}

void Editor::moveRight()
{
    if(x+1 < COLS && x+1 <= buff->lines[y].length())
    {
        x++;
        move(y, x);
    }
}

void Editor::moveUp()
{
    if(y-1 >= 0)
        y--;
    if(x >= buff->lines[y].length())
        x = buff->lines[y].length();
    move(y, x);
}

void Editor::moveDown()
{
    if(y+1 < LINES-1 && y+1 < buff->lines.size())
        y++;
    if(x >= buff->lines[y].length())
        x = buff->lines[y].length();
    move(y, x);
}/* end
Pretty straight forward, although I think I need to do a bit of explaining
on the if(x >= buff->lines[y].length()) part.
You see, if it didn’t have that, then when the user goes up or down,
if the current line of text was longer than the one above/below it,
then the cursor would be ‘dangling in midair’, so to speak.
This little if-statement snaps the cursor to the end of the next/previous
line if it were to be shorter than the current one.
*/


void Editor::printBuff()
{
    for(int i=0; i<LINES-1; i++)
    {
        if(i >= buff->lines.size())
        {
            move(i, 0);
            clrtoeol();
        }
        else
        {
            mvprintw(i, 0, buff->lines[i].c_str());
        }
        clrtoeol();
    }
    move(y, x);
}


//Printing the Status Line
void Editor::printStatusLine()
{
    attron(A_REVERSE);
    mvprintw(LINES-1, 0, status.c_str());
    clrtoeol();
    attroff(A_REVERSE);
}



// Three simple functions stand in our way:
// the 2 variations of the Editor::deleteLine function,
// and the most important Editor::saveFile() function!
void Editor::deleteLine()
{
    buff->removeLine(y);
}

void Editor::deleteLine(int i)
{
    buff->removeLine(i);
}



//The Editor::saveFile() function:
void Editor::saveFile()
{
    if(filename == "")
    {
        // Set filename to untitled
        filename = "untitled";
    }

    ofstream f(filename.c_str());
    if(f.is_open())
    {
        for(int i=0; i<buff->lines.size(); i++)
        {
            f << buff->lines[i] << endl;
        }
        status = "Saved to file!";
    }
    else
    {
        status = "Error: Cannot open file for writing!";
    }
    f.close();
}