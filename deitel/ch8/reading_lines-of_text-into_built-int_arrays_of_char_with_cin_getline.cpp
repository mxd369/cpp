#include <iostream>
using namespace std;
int main(){
	/*
	in some cases: input an entire line of text into a built-in array of chars
	cin object provides the member function getline,
	which takes three arguments-a built-in array of chars,
	in which the line of text will be stored,
	a length and a delimiter character
	*/
	cout << "Enter a sentence: " << '\n';
	char sentence[80];
	cin.getline(sentence, 80, '\n');// or written as -> cin.getline(sentence, 80);
	return 0;
	/*
	declares sentence as a built-in array of 80 chars and read a line fo text from keyboard
	into built-in array.
	Function stops reading characters when the delimiter character '\n' is encounter
	*/
	cout << "Sentence: "<< sentence << endl;
	return 0;
}