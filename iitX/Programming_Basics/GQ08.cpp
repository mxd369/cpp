#include <iostream>
using namespace std;

int main(){
    int a = 3;
    int num1, num2;
    num1 = 336;
    num2 = 27;

    for ( ; ; ) {
        a = a * 3;
        if(a > num1) {
            a = a - 5;
            break;
        }
    }

    while (true) {
        a = a / 2;
        if(a < num2) {
            a = a -5;
            break;
        }
    }
    cout << a;
    return 0;
}
