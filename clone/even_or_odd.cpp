#include <iostream>
using namespace std;

int main(){
	int number;
	bool isEven = true;
	cout<<"Give a number to check if it is even or odd: " << endl;
	cin>>number;
	if(number%2==0)
		cout << number << " " << isEven << endl;
	else
		cout << number << " " << !isEven << endl;
	return 0;
}
/*
$ g++ -c even_or_odd.cpp
$ g++ -o even_or_odd even_or_odd.cpp

$ ./even_or_odd
Give a number to check if it is even or odd: 
20
20 1

$ ./even_or_odd
Give a number to check if it is even or odd: 
19
19 0
*/