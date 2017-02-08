/*
ch 3.6 An example: find repeated words
*/
#include "std_lib_facilities.h"
using namespace std;
int main(){
	int number_of_words = 0;// start word counter at 0
	string previous = " ";	// not a word
	string current;
	while(cin>>current){
		// each time we see a word, increment that counter
		++number_of_words;	// increase word count
		/*
number_of_words += 1;
number_of_words = number_of_words+1;
++number_of_words is shorter and expresses the idea of incrementing directly.
		*/
		if (previous == current)
			cout << "word number " << number_of_words
				<< " repeated: " << current << '\n';
		previous = current;
	}
	return 0;
}