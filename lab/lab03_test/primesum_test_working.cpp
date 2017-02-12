/*
http://stackoverflow.com/questions/5811151/why-do-we-check-up-to-the-square-root-of-a-prime-number-to-determine-if-it-is-pr

Make your second loop be less than the square root of i. Make first loop limit to the 100000th prime (Google it!)

Mike: able to compute all 100,000 primes in 1-2 milliseconds. Get it under 10 seconds if possible.

Enter integer: 5
Prime sum: 28

Enter integer: 100000
Prime sum: 62260698721
*/
#include <iostream>
using namespace std;
int main(){
    // use squared for increased performance?
    int number;// value user inputs 
    int prime_num = 0;
    long long int sum=0;// use long long to get 100'000
    int i;
    int j;
    int k=0;
    cout<<"Enter integer: ";
    cin>>number;
    for(i = 2; k < number; i++){
        prime_num = 0;
        // Check whether i is prime or not
        for(j = 2; j <= i/2; j++){// do not include 1, since 1 is not considered a prime
            if(i % j == 0){
                prime_num = 1;
                break;
            }
        }
            if(prime_num==0){
                sum=sum+i;
                k++;
            }
    }
    cout << "Prime sum: "<< sum << endl;
    return 0;
}
/*
$ time ./primesum_test_working
Enter integer: 100000
Prime sum: 62261998442

real	4m49.043s
user	4m42.943s
sys     0m0.765s
*/
/*
$ time ./primesum_test_working
Enter integer: 5
Prime sum: 28

real	0m1.868s
user	0m0.001s
sys		0m0.002s
*/
/*
Enter integer: 100000
Prime sum: 62260698721

real	4m44.926s
user	4m40.384s
sys	0m0.456s
*/