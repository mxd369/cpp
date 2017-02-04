#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	//int double = 0;
	//string 1 = 1;
    //bool x = 65;
	char 55 = 122324;
}

/*
int double = 0;

$ g++ doesnt_do_a_thing.cpp
doesnt_do_a_thing.cpp:10:6: error: cannot combine with previous 'int'
      declaration specifier
        int double = 0;
            ^
doesnt_do_a_thing.cpp:10:13: error: expected unqualified-id
        int double = 0;
                   ^
2 errors generated.
*/

/*
string 1 = 1;

$ g++ doesnt_do_a_thing.cpp
doesnt_do_a_thing.cpp:11:9: error: expected unqualified-id
        string 1 = 1;
               ^
1 error generated.
*/

/*
bool x = 65;
$ g++ doesnt_do_a_thing.cpp
compiles successfully
*/

/*
char 55 = 122324;

$ g++ doesnt_do_a_thing.cpp
doesnt_do_a_thing.cpp:13:7: error: expected unqualified-id
        char 55 = 122324;
             ^
1 error generated.
*/