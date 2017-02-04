/*
9. Write a program that converts spelled·out numbers such as "zero" and "two" into digits,
such as 0 and 2. When the user inputs a number,
the program should print out the corresponding digit.
Do it for the values 0, 1, 2, 3, and 4 and write out
"not a number I know" if the user enters something that doesn't correspond,
such as "stupid computer!"
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	string num = " ";
	cout<<"Write a number between 0 and 4 such as two or three to be converted into a digit: \n";
	cin>>num;
	if(num == "zero" || num == "Zero" || num == "ZERO"){
		cout<<"0\n";
	}
	else if(num == "one" || num == "One" || num == "ONE"){
		cout<<"1\n";
	}
	else if(num == "two" || num == "Two" || num == "TWO" ){
		cout<<"2\n";
	}
	else if(num == "three" || num == "Three" || num == "THREE" ){
		cout<<"3\n";
	}
	else if(num == "four" || num == "Four" || num == "FOUR" ){
		cout<<"4\n";
	}
	else if(num == "five" || num == "Five" || num == "FIVE" ){
		cout<<"5\n";
	}
	else{
		cout<<"that's not a number I know, must be 0-5 inclusive to work, thanks!\n";
	}
}