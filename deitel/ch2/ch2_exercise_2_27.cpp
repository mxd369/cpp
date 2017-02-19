/*
(Integer Equivalent of a Character) Here is a peek ahead. In this chapter you learned about integers and the type int. C++ can also represent uppercase letters, lowercase letters and a considerable variety of special symbols. C++ uses small integers internally to represent each different character. The set of characters a computer uses and the corresponding integer representations for those characters are called that computer’s character set. You can print a character by enclosing that character in single quotes, as with

	cout << 'A'; // print an uppercase A

You can print the integer equivalent of a character using static_cast as follows:

	cout << static_cast< int >( 'A' ); // print 'A' as an integer

This is called a cast operation (we formally introduce casts in Chapter 4). When the preceding statement executes, it prints the value 65 (on systems that use the ASCII character set). Write a program that prints the integer equivalent of a character typed at the keyboard. Store the input in a variable of type char. Test your program several times using uppercase letters, lowercase letters, digits and special characters (like $).
*/
#include <iostream>
using namespace std;

int main(){
	//cout << static_cast< int >( 'A' ); // print 'A' as an integer
	char x{'A'};
	cout<<"Give a char: "<<endl;
	cin>>x;
	cout << static_cast< int >( x ) << endl;
	return 0;
}
/*
$ ./ch2_exercise_2_27
Give a char: 
A
65
$ make

$ ./ch2_exercise_2_27
Give a char: 
U
85

$ ./ch2_exercise_2_27
Give a char: 
p
112

$ ./ch2_exercise_2_27
Give a char: 
$
36

$ ./ch2_exercise_2_27
Give a char: 
%
37

$ ./ch2_exercise_2_27
Give a char: 
 

_
95
*/