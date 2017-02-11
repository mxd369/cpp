/*
primesum.cpp:

Let the user input a single integer n where 1 <= n <= 100000.

Your program should print the sum of the first n prime numbers.
Remember, you do not need nor should you use an array to solve this problem.
In the first example below, the first 5 prime numbers are 2, 3, 5, 7, and 11.

Enter integer: 5
Prime sum: 28

Enter integer: 100000
Prime sum: 62260698721
*/
#include <iostream>
using namespace std;
int main()
{
    int start = 1;
    int max = 100000; // user input, between 1 <= n <= 10'000
    int i;
    int flag;
    int sum = 0;
    // get user input
    cout << "Enter an integer: ";
    //cin >> n;

    // while loop
    while (start < max)
    {
        flag = 0;
        // for loop
        for(i = 2; i <= start/2; ++i)
        {
            if(start % i == 0)
            {
                flag = 1;
                break;
            }
        }
        // conditional
        if (flag == 0)
            sum = sum + start;
            cout << start << " ";
        // increment
        ++start;
    }
	cout << "Prime sum " << sum - 1 << endl;
    return 0;
}
