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


void Buffer::insertLine(string line, int n)
{
    line = remTabs(line);                   // Conversion (happens every time)
    lines.insert(lines.begin()+n, line);
}

void Buffer::appendLine(string line)
{
    line = remTabs(line);
    lines.push_back(line);
}

void Buffer::removeLine(int n)
{
    lines.erase(lines.begin()+n);
}