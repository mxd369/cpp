// Fig. 3.1: ch3_fig_3_1_AccountTest.cpp, .cpp are source-code files
// Creating and manipulating an Account Object
#include <iostream>  // include directive for Standard Library Header iostream
#include <string>    // include directive for Standard Library Header iostream
#include "AccountModified.h" // tell compiler what an account is by insluding its header

using namespace std;

int main() {
	Account myAccount; // instantiating an Object, create Account object myAccount

	// show that the initial value of myAccount's name is the empty string
	cout << "Initial account name is: " << myAccount.getName();// getName member function returns the account name stored in a particular Account object, displays myAccounts initial name by calling the object's getName member function with the expression myAccount.getName()
	// to call this member function for a specific object, specify the object's name (myAccount), followed by the dot operator (.) then the member function name (getName) and a set of parentheses. Empty parentheses indicate that getName does not require any additional information to perform its task
	// does not display a name, bc we have not yet stored a name in the myAccount object, cre

	cout << "\nPlease enter the account name: ";// prompt for and read name
	string theName;//creates a string variable called theName that's used to store the account name entered by the user
	getline(cin, theName);	// read a line of text, function receiving a line of text from the user, function are not members of a class, it is a global function. It reads the name from the user and places it in the variable theName, using the C++ standard library global function getline to perform the input. getline requires <string> header and belongs to namespace std
	myAccount.setName(theName); // put theName in myAccount, Account class's setName member function stores an account name in a particular Account object
	/*
	From main's view, when setName is called:
	1. The program transfers execution from line -> (myAccount.setName(theName); // put theName in myAccount), in main to setName member function's definition. The call passes to the function the argument value in the call's parentheses-that is, theName object's value. Because setName was called via the myAccount object, setName "knows" the exact object to manipulate
	2. Next, member function setName stores the argument's value in the myAccount object.
	3. When setName completes execution, program execution returns to where setName was called -> myAccount.setName(theName);, then continues at -> cout << "Name in object myAccount is: " << myAccount.getName() << endl;
	*/
	
	// display the name stored in object myAccount
	cout << "Name in object myAccount is: " << myAccount.getName() << endl;
	
}