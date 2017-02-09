#include <iostream>
#include <sstream>
using namespace std;
int main()
{
	string x;
	getline(cin, x);

	int sum;
	int a;
	int count;
	int avg;

	stringstream y(x);

	while (y >> a){
		sum += a;
		++count;
		cout << "count: "<< count << endl;
		cout << "x: " << x <<endl;
		cout << "a: " << a << endl;
		cout << "y: " << y << endl;
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
		int spaces;
		for (int i = 0; i < count; i++){
			if (a == " "){
				spaces++;
				cout << "spaces: " << spaces << endl;
			}
		}

	}

	avg = sum/count;

	cout << "avg: " << avg << endl;

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