/*
primesum.cpp: Let the user input a single integer n where 1 <= n <= 100000. Your program should print the sum of
the first n prime numbers. Remember, you do not need nor should you use an array to solve this problem. In the first
example below, the first 5 prime numbers are 2, 3, 5, 7, and 11.


uses square

Enter integer: 5
Prime sum: 28

Enter integer: 100000
Prime sum: 62260698721
*/

/*
In case you forgot, a prime is a positive integer that can be divided only by 1 and by itself.
Consider 2 the first prime (ignoring 1).
*/
#include <iostream>
using namespace std;
int main()
{
	int sum;
	int integer; 
//	int count = 0;
	cout << "Enter Integer: " << endl;
	cin >> integer;
	//cout << integer << endl;

	for (int i = 1; i <= integer; i++){
		cout << i << endl;
		//int sum;
		if ((i % 1 == 0) && (i % i == 0)){
			cout << i << " is a Prime Number." << endl;
			sum += i;
		}
		cout << sum << endl;
	}

	return 0;
}
/*
$ ./primesum 
Enter Integer: 
10
10
0
0
1
1
1
2
2
2
3
3
3
4
4
4
5
5
5
6
6
6
7
7
7
8
8
8
9
9
9
10
 10 10 10 10 10 10 10 10 10 10
*/
