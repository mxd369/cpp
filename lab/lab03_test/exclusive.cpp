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
	int count = 0;
	int exclusive_int;
	int previous = 0;
	int current = -1;
	stringstream y(x);

	while(y >> a){
		cout << "count: " << count << endl;
		//cout << "x: " << x << endl;
		//cout << "a: " << a << endl;
		cout << "a is currently: " << a << endl;
		previous = a;
		cout << "previous is: " << previous << endl;
		
		++count;
		/*
		while (y >> a) {	// read a stream of words
			if(previous == a)	// check if the word is the same as last
				cout << "repeated word: " << current << '\n';
		previous = current;
		}
		*/

		//++count;

		/*
		for ( ; count >= input;){
			if (a > count)
		}*/

		/*
		for(unsigned i = 0; i < x.length(); ++i){
			cout << x.at(i) << endl;
		}
		*/

		/*
		if(count == 1) {
			cout << "a currently is: " << a << endl; 
		}*/

		//cout << "x is " << x << endl;
	}
	cout << "x is " << x << endl;
	cout << "count: " << count << endl;
	// if (a == x) { cout << "a == x" << endl; }
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
