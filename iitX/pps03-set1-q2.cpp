#include <iostream>
using namespace std;
int main()
{
    int FACT = 1;
    for (unsigned int i = 6; i >= 0; --i)
    {
        FACT *= i;
    }
    cout << FACT << endl;
    return 0;
}

/*
 Will result in an infinite loop Will result in an infinite loop - correct
EXPLANATION

Ordinarily, because of the condition i >= 0,
the loop will be executed successively for decreasing values of i,
starting with 6, followed by 5, 4, 3, 2, 1 and 0.
The values of FACT will successively be 6, 30, 120, 360, 720, 720, and 0.
After this, 'i' is supposed to become -1, at which point the loop should terminate.

Unfortunately, the declared type of 'i' is unsigned int.
So 'i' can never become negative.
When i is 0, and you subtract 1 from it,
it actually becomes the largest possible positive value of unsigned int,
because of modular arithmetic. Hence, the loop condition remains always true, and we never exit the loop.

The main correction needed in this program,
is to change the condition from i >= 0 to i > 0,
or even i > 1.
The type can then be either int or unsigned int.
*/