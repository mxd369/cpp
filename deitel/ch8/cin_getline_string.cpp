#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	string word = " ";
	// reading strings into built-in arrays of char with cin

/*
	cin >> word;
*/

	// string entered by user is stored in word.
	// reads characters until a white-space character or end-of-file indicator is ecnountered
	// the string should be no longer than 19 chars to leave room for terminating null char
	// setw stream manipulator can be used to ensure that the string can read into word,
	// does not exceed the size of the built-in array.
	// specifies cin should read max of 19 chars into word, save 20th location to store terminating null char
	cin >> setw(20) >> word;

	cout << word << endl;

	return 0;
}
/*
$ g++ -std=c++14 -c cin_getline_string.cpp
$ g++ -o cin_getline_string cin_getline_string.o

$ ./cin_getline_string
abcdefghijklmnopqrs       
abcdefghijklmnopqrs

$ ./cin_getline_string
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrst
*/