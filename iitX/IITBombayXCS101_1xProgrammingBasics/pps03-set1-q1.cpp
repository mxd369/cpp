#include <iostream>
using namespace std;
int main()
{
    int a = 2;
    int b = 5;
    int expr_one, expr_two;

    expr_one = 5*a - 2*b;
    expr_two = (4*a + 8*b) % (b-1);

    while(expr_one == expr_two)
    {
        expr_one += 5;
        expr_two --;
    }

    return 0;
}

/*
0

EXPLANATION

The condition inside the 'while' loop uses an assignment operator '='
instead of the equality comparison operator '=='.
However, since the value of 'expr_two' is 0, and it gets assigned to 'expr_one'
(which too had a value of 0 before execution of 'while'),
the condition evaluates to 'False' and the loop is never entered.
Please note that this is an incorrect way of writing a condition in the 'if' statement,
and should never be used this way.
	
*/