// https://www.youtube.com/watch?v=LM6EDIKS5Pk
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	string number = "44";
	stringstream sso;
	sso << number;
	int input;
	sso >> input;
	cout << input+2 << endl;
	cout << input+2 << endl;
	cout << number+"2" << endl;

	return 0;
}