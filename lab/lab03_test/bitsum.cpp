/*
bitsum.cpp:

Let the user input a single integer n where 1 <= n <= 18446744073709551615.
Your program should print the number of 1 bits in the binary representation of n.

Remember, you do not need nor should you use an array to solve this problem.
In the example below, the binary representation of 115 is 1110011.

Remember, you should not use string manipulation beyond extraction from an std::stringstream, if needed.

Enter integer: 115
Bit sum: 5

piazza-note: Modulo 2 and dividing by 2 should be all that's needed.
*/
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter integer : \n";
	cin>>n;
	int sum=0;
	while(n>0)
	{
		if(n%2==1){		//modulo 2
			sum=sum + 1;
		}
		n=n/2;			// divide by 2
	}
	cout<<"The bit sum is "<<sum<<endl;

return 0;
}