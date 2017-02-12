/*
https://www.programiz.com/cpp-programming/examples/frequency-character

Example 1: Find Frequency of Characters of a String Object
*/

#include <iostream>
using namespace std;

int main()
{
    string str = "2 1 55 3 2 1 4 4 2 2 55";
    char checkCharacter = 'a';
    int count = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] ==  checkCharacter)
        {
            ++ count;
        }
    }

    cout << "Number of " << checkCharacter << " = " << count << endl;

    return 0;
}