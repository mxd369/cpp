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
/*
$ ./ch3_6_An_example_find_repeated_words
1 1 111
word number 2 repeated: 1
20 201 2200 20 20 20 
word number 8 repeated: 20
word number 9 repeated: 20
^C

$ ./ch3_6_An_example_find_repeated_words
20 201 2200 20 20 20
word number 5 repeated: 20
word number 6 repeated: 20
*/