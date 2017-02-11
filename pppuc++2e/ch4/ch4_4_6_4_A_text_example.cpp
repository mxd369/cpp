/*
We didn’t present the temperature example because we were particularly interested in temperatures. Many people — such as meteorologists, agronomists, and oceanographers — are very interested in temperature data and values based on it, such as means and medians. However, we are not. From a programmer’s point of view, what’s interesting about this example is its generality: the vector and the simple operations on it can be used in a huge range of applications. It is fair to say that whatever you are interested in, if you need to analyze data, you’ll use vector (or a similar data structure; see Chapter 21). As an example, let’s build a simple dictionary:
*/

#include "std_lib_facilities.h"
using namespace std;
// simple dictionary: list of sorted words
int main(){
	vector<string> words;
	for(string temp; cin>>temp;)	// read whitespace-separated words
		words.push_back(temp);		// put into vector
	cout << "Number of words: " << words.size()	<< '\n';

	sort(words);					// sort the words
	for (int i = 0; i < words.size(); ++i)
		if (i==0 || words[i-1]!=words[i])	// is this a ne word?
			cout << words[i] << "\n";
	
	// how do we stop reading string input?
	for (string temp; cin>>temp;)	// read
		words.push_back(temp);		// put into vector
}

/*

Compile:

$ g++ -std=c++11 -c ch4_4_6_4_A_text_example.cpp
In file included from ch4_4_6_4_A_text_example.cpp:5:
./std_lib_facilities.h:107:8: warning: comparison of unsigned expression < 0 is always false
      [-Wtautological-compare]
                if (i<0||size()<=i) throw Range_error(i);
                    ~^~
./std_lib_facilities.h:113:8: warning: comparison of unsigned expression < 0 is always false
      [-Wtautological-compare]
                if (i<0||size()<=i) throw Range_error(i);
                    ~^~
2 warnings generated.


$ g++ -o ch4_4_6_4_A_text_example ch4_4_6_4_A_text_example.o
$ ./ch4_4_6_4_A_text_example.cpp


*/