#include "Buffer.h"

Buffer::Buffer() {}

// remTabs(string) function
// This function recursively finds a tab in a line
string Buffer::remTabs(string line)
{
	int tab = line.find("\t");
	if(tab == line.npos)
		return line;
	else
		return remTabs(line.replace(tab, 1, "    "));
}

