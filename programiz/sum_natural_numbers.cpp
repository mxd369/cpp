https://www.programiz.com/cpp-programming/examples/sum-natural-number
#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << "Sum = " << sum << endl;
    return 0;
}