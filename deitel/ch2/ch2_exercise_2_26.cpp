/*
(Checkerboard Pattern) Display the following checkerboard pattern with eight output statements, then display the same pattern using as few statements as possible.

* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
*/
#include <iostream>
using namespace std;

int main(){
	string first = "* * * * * * * *";
	string second =  " * * * * * * * *";
	/*
	cout << first << '\n' << second << '\n'
		<< first << '\n' << second << '\n'
		<< first << '\n' << second << '\n'
		<< first << '\n' << second << '\n';
	*/
	for(int i = 0; i < 4; i++){
		cout << first << '\n' << second << '\n';
	}
	return 0;
}
/*
first
$ ./ch2_exercise_2_26
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *

second
$ ./ch2_exercise_2_26
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
*/