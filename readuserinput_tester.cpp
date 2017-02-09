/*
exclusive.cpp:

Let the user input an odd number of positive integers, space separated, on a single line (as seen below).
Assume that each integer except for one, the exclusive integer, appears an even number of times in the input.
Your program should output the exclusive integer.
Remember, you do not need nor should you use an array to solve this problem.
You should also not use string manipulation beyond extraction from an std::stringstream, if needed.

Enter integers: 2 1 55 3 2 1 4 4 2 2 55
Exclusive: 3

piazza note: "Assume that each integer except for one, the exclusive integer, appears an even number of times in the input."
*/
#include <iostream>
#include <sstream>
using namespace std;
int main()
{
	string x;
	getline(cin, x);

	int sum = 0;
	int a;
	int count = 0;
	int avg;
	int exclusive_int;
	stringstream y(x);

	while (y >> a){
		exclusive_int = a;
		// if a repeats then a is not exclusive
		//if (a == a){}
		sum += a;
		++count;
		cout << "count: "<< count << endl;
		cout << "x: " << x <<endl;
		cout << "a: " << a << endl;
		/* tester
		if (a == a)
			cout << "word number " << count << " repeated: " << x << '\n';
		*/
		//previous = current;
		/*
		for (int i = 0;  < count; i++){
		}
		*/
		/* thoughts
			if count1 through countN is != then assign that count to exclusive	
		*/

	}
	avg = sum/count;
	cout << "avg: " << avg << endl;
	cout << "Exclusive: " << exclusive_int << endl;
	cout << a - 1 << endl;
	return 0;
}
/*
$ g++ -std=c++14 -c readuserinput_tester.cpp
$ g++ -o readuserinput_tester readuserinput_tester.o
$ ./readuserinput_tester
2 1 55 3 2 1 4 4 2 2 55
2
1
55
3
2
1
4
4
2
2
55
avg: 11
*/

/*
$ ./readuserinput_tester
2 1 55 3 2 1 4 4 2 2 55
count: 1
x: 2 1 55 3 2 1 4 4 2 2 55
a: 2
count: 2
x: 2 1 55 3 2 1 4 4 2 2 55
a: 1
count: 3
x: 2 1 55 3 2 1 4 4 2 2 55
a: 55
count: 4
x: 2 1 55 3 2 1 4 4 2 2 55
a: 3
count: 5
x: 2 1 55 3 2 1 4 4 2 2 55
a: 2
count: 6
x: 2 1 55 3 2 1 4 4 2 2 55
a: 1
count: 7
x: 2 1 55 3 2 1 4 4 2 2 55
a: 4
count: 8
x: 2 1 55 3 2 1 4 4 2 2 55
a: 4
count: 9
x: 2 1 55 3 2 1 4 4 2 2 55
a: 2
count: 10
x: 2 1 55 3 2 1 4 4 2 2 55
a: 2
count: 11
x: 2 1 55 3 2 1 4 4 2 2 55
a: 55
avg: 11
Exclusive: 55



$ ./readuserinput_tester
1 2 3 4 5 6 8
count: 1
x: 1 2 3 4 5 6 8
a: 1
count: 2
x: 1 2 3 4 5 6 8
a: 2
count: 3
x: 1 2 3 4 5 6 8
a: 3
count: 4
x: 1 2 3 4 5 6 8
a: 4
count: 5
x: 1 2 3 4 5 6 8
a: 5
count: 6
x: 1 2 3 4 5 6 8
a: 6
count: 7
x: 1 2 3 4 5 6 8
a: 8
avg: 4
Exclusive: 8
*/