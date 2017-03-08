#include <iostream>
using namespace std;
int main()
{
    for(int i = 0; i < 10; ++i)
    {
        cout << "*";
        int j = 0;
        while(j++ < 2 *i)
        {
          cout << "+";
        }
        cout << "*" << endl;
    }
  return 0;
}

/*
**                              'j++ < 0'
*++* // 2 * 1                   'j++ < 1'
*++++* // 2 * 2                 'j++ < 4'
*++++++* // 2 * 3               'j++ < 6'
*++++++++* // 2 * 4             'j++ < 8'
*++++++++++* // 2 * 5           'j++ < 10'
*++++++++++++* // 2 * 6         'j++ < 12'
*++++++++++++++* // 2 * 7       'j++ < 14'
*++++++++++++++++* // 2 * 8     'j++ < 16'
*++++++++++++++++++* // 2 * 9   'j++ < 18'

output
**
*++*
*++++*
*++++++*
*++++++++*
*++++++++++*
*++++++++++++*
*++++++++++++++*
*++++++++++++++++*
*++++++++++++++++++*		

EXPLANATION

Each outer iteration prints one *,
followed by a number of + symbols printed by the inner while loop,
followed again by a *.
The third line will be printed when i = 2 in the outer iteration.
The while condition at this point will be 'j++ < 4'.
This iteration will be executed 4 times, for j =0, 1, 2, and 3,
printing + symbol 4 times.

The patterns that is printed after the entire program executes is :
        
**
*++*
*++++*
*++++++*
*++++++++*
*++++++++++*
*++++++++++++*
*++++++++++++++*
*++++++++++++++++*
*++++++++++++++++++*
*/