#include <iostream>
using namespace std;
int main() {
    int a, b;
    do {
        cout << "Enter a: " ;
        cin >> a;
        cout << "Enter b: " ;
        cin >> b;
    } while (a < 10 || b > 10);
    return 0;
}

/*

For all values of input 'a' greater than 9 and input 'b' lesser than 11, 
the program is guaranteed to terminate
For all values of input 'a' greater than 9 and input 'b' lesser than 11,
the program is guaranteed to terminate - correct

EXPLANATION

At first, the value of variables 'a' and 'b' are taken from the user.
The loop will execute if the value of variable 'a' is either less
than 10 or the value of variable 'b' is either greater than 10.
This means that irrespective of the value of variable 'b',
if the value of variable a is '-n to 9', the loop will never terminate.
Also, irrespective of the value of variable 'a',
if the value of variable 'b' is '11 to n', the loop will never terminate.

Option A: The statement means that a has value '10 to n' and b is '-n to +n'.
From the explanation given above,
the loop will never terminate for all values of b.
Hence, this option is incorrect. 

Option B: The statement means that b is '-n to 10' and 'a' is '-n to +n'.
From the explanation given above,
the loop will never terminate for all values of a.
Hence, this option is incorrect. 

Option C: The staement means that a is '10 to n' and b is '-n to 10'.
From the explanation given above,
for any combination of values of 'a' and 'b' mentioned in this option,
the loop will always terminate. Hence, this option is correct. 

Option D: Since, option C is correct, this option is incorrect.

*/