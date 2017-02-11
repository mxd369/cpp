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
//https://www.programiz.com/cpp-programming/examples/prime-number-intervals
#include <iostream>
using namespace std;

int main()
{
    int low = 1;
	int high = 100000;
	int i;
	int flag;

	//int integer;

    //cout << "Enter integer: " << endl;
	//cin >> integer;

    cout << "Prime numbers between " << low << " and " << high << " are: ";

    while (low <= high)
    {
        flag = 0;

        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            cout << low << " ";

        ++low;
    }

    return 0;
}