/*
checks if user input is odd or even
*/
#include <iostream>
using namespace std;

int even_or_odd(int n);

int main(){
	int n;
	cout << "Enter an integer: " << endl;
	cin >> n;
	even_or_odd(n);

	return 0;
}

int even_or_odd(int n){
	if (n % 2 == 0)
		cout << n << " is even." << endl;
	else
		cout << n << " is odd." << endl;
	return n;
}

/*
$ g++ -c even_or_odd_function.cpp
$ g++ -o even_or_odd_function even_or_odd_function.o
$ ./even_or_odd_function
Enter an integer: 
900
900 is even.

$ ./even_or_odd_function
Enter an integer: 
15
15 is odd.
*/