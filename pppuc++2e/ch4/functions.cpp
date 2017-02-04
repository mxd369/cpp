/*
calculate and print a table of squares 0-99
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int square(int x)  // return the square of x
{
	return x*x;
}

int main()
{
	cout<<square(2)<<'\n';  // return 4
	cout<<square(3)<<'\n';  // return 9
	cout<<square(4)<<'\n';  // return 16
	cout<<square(5)<<'\n';  // return 25
	cout<<square(6)<<'\n';  // return 36
	cout<<square(7)<<'\n';  // return 49
	cout<<square(8)<<'\n';  // return 64
	cout<<square(9)<<'\n';  // return 81
	cout<<square(10)<<'\n'; // return 100
	cout<<square(11)<<'\n'; // return 121
	cout<<square(12)<<'\n'; // return 144
	cout<<square(13)<<'\n'; // return 169
	cout<<square(14)<<'\n'; // return 196
	cout<<square(15)<<'\n'; // return 225
	cout<<square(16)<<'\n'; // return 256
	cout<<square(17)<<'\n'; // return 289
	cout<<square(18)<<'\n'; // return 324
	cout<<square(19)<<'\n'; // return 361
	cout<<square(20)<<'\n'; // return 400
}
/*
 3
 16
 16
 96
16x
256
 4
 17
 17
119
17x
289
 
 6
 18
 18
144
18x
324
 
 8
 19
 19
171
19x
361
*/