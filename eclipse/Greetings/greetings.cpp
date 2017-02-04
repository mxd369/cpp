/*
greetings.cpp
Feb 4, 2017
michaeldang
*/
#include <iostream>
#include <sstream>
using namespace std;
int main(){
	cout << "Enter integers: " << endl;
	string input;
	getline(cin,input);
	int Number;
	int Sum;
	int Count;
	stringstream stream(input);

	while(stream >> Number){
		// code here
		Sum += Number;
		++Count;
	}

	cout << "Count is: " << Count << endl;
	cout << "Sum: " << Sum << endl;
	cout << "Number: " << Number << endl;
	return 0;
} // main
