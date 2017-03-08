#include <iostream>
using namespace std;

int main() {
    int m, n, temp;
    cout << "Give integers m and n : " ;
    cin >> m >> n ;
    do{
        if (m < n)
            n = n - m;
        if (n < m) {
            temp = m;
            m = n;
            n = temp;
        }
        if(m > n)
            cout << "!";
    }
    while (m < n);
    return 0;
} 
/*
For all values of 'm' and 'n', no "!" is printed. 
EXPLANATION:
Let us focus on the second 'if' statement in the body of the 'do ... while' statement.
Prior to executing this statement,
we could have one of three cases:

'm == n'
'm < n'
or
'm > n'

In the first and second cases,
the condition of the second 'if' statement evaluates to false and
therefore either 'm == n' or 'm < n' continues to hold even after executing the second 'if' statement.
If 'm > n' before executing the second 'if' statement,
the values of 'm' and 'n' are swapped,
and therefore the (new) value of 'm' is less than the (new) value of 'n' after
executing this 'if' statement. Therefore, in all the cases, the value of 'm',
after executing the second 'if' statement, is less than or equal to the value of 'n'.
Therefore, the condition of the 'if' statement 'if (m > n) cout << "!"'
never evaluates to true, and so no "!" is ever printed.
*/