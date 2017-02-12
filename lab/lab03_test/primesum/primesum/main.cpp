/*
primesum.cpp: Let the user input a single integer n where 1  n  100000.
Your program should print the sum of the first n prime numbers.
Remember, you do not need nor should you use an array to solve this problem.
In the first example below, the  first 5 prime numbers are 2, 3, 5, 7, and 11.

Enter integer: 5
Prime sum: 28
Enter integer: 100000
Prime sum: 62260698721
*/
#include <iostream>
using namespace std;
int main(){
    // how to use squared to increase performance?
    int N;
    int i;
    int j;
    int isPrime;
    //int n;
    long long int sum=0;
    int k=0;
    cout<<"Enter integer:"<<endl;
    cin>>N;
    for(i = 2; k <= N;i++){
        isPrime = 0;
        /* Check whether i is prime or not */
        for(j = 2; j <= i/2; j++){
            /* Check If any number between 2 to i/2 divides I completely If yes the i cannot be prime number */
            if(i % j == 0){
                isPrime = 1;
                break;
            }
        }
            if(isPrime==0){
                sum=sum+i;
                k++;
            }
    }
    cout << "Prime sum: "<< sum << endl;
    return 0;
}
/*
$ time ./primesum_test_working
Enter integer:
100000
The sum of the first 100000 prime numbers is 62261998442

real	4m49.043s
user	4m42.943s
sys     0m0.765s
*/