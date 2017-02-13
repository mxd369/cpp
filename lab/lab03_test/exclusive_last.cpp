/*
exclusive.cpp:

Let the user input an odd number of positive integers,
space separated, on a single line (as seen below).
Assume that each integer except for one, the exclusive integer,
appears an even number of times in the input.
Your program should output the exclusive integer.
Remember, you do not need nor should you use an array to solve this problem.
You should also not use string manipulation beyond extraction from an 
std::stringstream, if needed. 

Enter integers: 2 1 55 3 2 1 4 4 2 2 55
Exclusive: 3

"Assume that each integer except for one, the exclusive integer, appears an even number of times in the input."

there will be an odd number of input values but there will only be one unique value in the list aka the exclusive value
*/
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main(){
	cout << "Enter integers: " << endl;

	string x;
	getline(cin, x);
	int a;
	int n;
	int number;
	int count = 0;
	int exclusive= 0;
	stringstream y(x);

	while(y >> a){
		cout << "x: " << x << endl;
		cout << "count: " << count << endl;
		cout << "a is currently: " << a << endl;
		
		++count;
		n = count;
		while(n!=0)
		{
			//cin>>a;
			//for(int i = 0; )
			exclusive = exclusive ^ a;
			n--;// reset value
		}

	}
	//cout << "x is " << x << endl;
	//cout << "count: " << count << endl;
	cout << "Exclusive Number: " << exclusive;
	return 0;
}

/*
$ ./exclusive
Enter integers: 
2 1 55 3 2 1 4 4 2 2 55
count: 0
a is currently: 2
previous is: 2
count: 1
a is currently: 1
previous is: 1
count: 2
a is currently: 55
previous is: 55
count: 3
a is currently: 3
previous is: 3
count: 4
a is currently: 2
previous is: 2
count: 5
a is currently: 1
previous is: 1
count: 6
a is currently: 4
previous is: 4
count: 7
a is currently: 4
previous is: 4
count: 8
a is currently: 2
previous is: 2
count: 9
a is currently: 2
previous is: 2
count: 10
a is currently: 55
previous is: 55
x is 2 1 55 3 2 1 4 4 2 2 55
count: 11
*/
