#include <iostream>
#include <string>
using namespace std;
int main()
{
	int age;

	cout << "How old are you? ";
	cin >> age;	// cin reads up-to the press of the enter-key, need cin.ignore
	cin.ignore();	// if doing a cin then a getline	

	cout << "What is your name? ";

	string text;
	// get data up-to the enter k
	getline(cin, text);

	cout << "Hello, " << text << endl;

	return 0;
}
