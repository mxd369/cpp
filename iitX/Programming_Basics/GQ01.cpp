#include <iostream>
using namespace std;

int main() {
    int d = 7;
    int m = 11;
    int y = 1505;
    int c = 2;
    int val;
    val = ( d + m + y + (y/4) + c) % 7;
    cout << val;
    return 0;
}  
