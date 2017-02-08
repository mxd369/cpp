#include "std_lib_facilities.h"
using namespace std;
int main()
{
	string previous = " ";		// previous word; initialized to "not a word"
	string current;				// current word
	while (cin >> current) {	// read a stream of words
		if(previous == current)	// check if the word is the same as last
			cout << "repeated word: " << current << '\n';
	previous = current;
	}
	return 0;
}

/*
$ g++ -std=c++11 -c ch3_5_1_An_example_detect_repeated_words.cpp
In file included from ch3_5_1_An_example_detect_repeated_words.cpp:1:
./std_lib_facilities.h:107:8: warning: comparison of unsigned expression < 0 is always false
      [-Wtautological-compare]
                if (i<0||size()<=i) throw Range_error(i);
                    ~^~
./std_lib_facilities.h:113:8: warning: comparison of unsigned expression < 0 is always false
      [-Wtautological-compare]
                if (i<0||size()<=i) throw Range_error(i);
                    ~^~
2 warnings generated.
$ g++ -o ch3_5_1_An_example_detect_repeated_words ch3_5_1_An_example_detect_repeated_words.o

$ ./ch3_5_1_An_example_detect_repeated_words
hello
hello
repeated word: hello
moto moto
repeated word: moto
aaa bbb ccc
aaa bvv aa
red red
repeated word: red
blue bleu
po po
repeated word: po
^C
*/