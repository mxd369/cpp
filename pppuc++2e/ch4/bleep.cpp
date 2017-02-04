/*
Write a program that "bleeps" out words that you don't like; that is, you
read in words using cin and print them again on cout. If a word is among a
few you have defined, you write out BLEEP instead of that word. Start with
one "disliked word" such as
string disliked = "Broccoli";
When that works, add a few more.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	string a = "shit";
	string b = "damn";
	string c = "fuck";
	string e = "bitch";
	string d = " ";
	cout<<"Type in a curse word, don't worry it will be censored: \n";
	cin>>d;
	if(d == a || d == b || d == c || d == e)
	{
	cout<<"Bleep\n";
    }
}
