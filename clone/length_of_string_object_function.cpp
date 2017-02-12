#include <iostream>
using namespace std;

string str_length(string s);

int main(){
	string s = " ";
	cout << "Enter a string: " << endl;
	cin >> s;

	str_length(s);

	return 0;
}

string str_length(string s){
	int x = s.length();
	return x;
}