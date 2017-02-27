// file add_two_numbers.cpp

// Compiler Directives
// compiler directives: instructions to compiler used when compiling your program to machine language
#include <iostream> // compiler, include instructions from "iostream" header file
using namespace std;

// this program reads two integers and calculates the sum
// main function begins here
int main(){
    // start of: A logical block of statements

	// variable declaration
	int A,B,C;
	// input/output statements
	cout << "Give two numbers: ";
	cin >> A >> B;
	// assignment statement
	C = A + B;
	cout << "The sum is: " << C << '\n';
    // return control back to caller(here it is the OS), and pass the value 0
	return 0;
	
    // end of: A logical block of statements
}
// main function begins here


/* Hierarchically grouped blocks
// one top level group 
// two lower level groups
int main()
{
  int A, B, C; // first group
    { cout << "Give two numbers";  //second group
  cin >> A >> B; }
  C = A + B;  // first group
    { cout << "Sum is" << C;       //second group
  return 0;}
}

*/