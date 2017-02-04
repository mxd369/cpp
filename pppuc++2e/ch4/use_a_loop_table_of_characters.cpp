/*
The character 'b' is char('a'+1 ), 'c' is char('a'+2), etc.
Use a loop to write out a table of characters with their corresponding integer values:

a 97
b 98
z 122
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int square(int x)
{
	return x*x;
}

int main()
{
	char a = 96;
	cout<<a+1<<'\n';
	
	int i = 0;                          //initialize i

	while(i<100)                        //the loop condition testing the loop variable i
	{
		cout<<i<<'\t'<<square(i)<<'\n';
		++i;                            //increment the loop variable i
	}
}