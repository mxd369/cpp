#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
	// read input
	string input;
	getline(cin, input);

	// initialize string stream
	stringstream ss(input);

	// extract input
	string name;
	string course;
	string grade;

	ss >> name >> course >> grade;
	
	cout << input << endl;
	
	return 0;
}