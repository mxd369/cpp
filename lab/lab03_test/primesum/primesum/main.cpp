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
    cout<<"The sum of the first "<<N<<" prime numbers is "<<sum<<endl;
    return 0;
}