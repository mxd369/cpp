// Fig. 3.8: AccountModified.h
// Account class with name and balance data members, and a 
// constructor and deposit function that each perform validation.

/*
(Modified Account Class) Modify class Account (Fig. 3.8) to provide member function called withdraw that withdraws money from an Account. Ensure that the withdrawal amount does not exceed the Account's balance. If it does, the balance should be left unchanged and the member function should display a message indicating "Withdrawal amount exceeded account balance."
*/

#include <string>// enable program to use C++ string data type


class Account { // class definition, contains the keyword class followed immediaitely by the class' name
public:// available to the public, can be used by other functions inthe program, such as main, and by member functions of other classes(if any)
	// member function that sets the account name in the object
	void setName(std::string accountName) { // setName's definition, function header, return type void, does not return any information to its calling function, declares the string parameter accountName-which receives the name that's passed to setName as an argument, corresponds to -> myAccount.setName(theName);, when this line executes , the argument value in the call's parentheses (i.e., the value stored in theName) is copied into the corresponding parameter (accountName) in the member function's header -> void setName(std::string accountName), for example if entered "Jane Green" for theName, "Jane Green" was copied into the accountName parameter
		name = accountName; // store the account name, setName Member Function Body
	}

	// member function that retrieves the account name form the object
	// getName Member Function, returns a particular Account object's name to the caller--a string, as specified by the function's return type the member function has an empty parameter list, so it does not require additional information to perform its task. member function with return type other than void is called and completes its task, it must return a result to its caller. A statement that calls member function getNme on an Account object expects to receive the Account's name
	std::string getName() const {// function header, type string, 
		return name; // return name's value to this function's caller, passes the string value of data member name back to the caller, which then can use the returned value, -> cout << "Name in object myAccount is: " << myAccount.getName() << endl;, uses the value returned by getName to output the name stored in the myAccount object.
		// we declared member function getName as a const -> std::string getName() const {, because in the process of returning the name of the function doesn't and shouldn't modify the Account object on whcih it's called
	}
	private: // access specifiers private and public, private is an access specifier, followed by a colon always, indicates that name is accessible only to class Account's member functions, this is known as data-hiding-the data member name is encapsulated (hidden) and can be used only in class Account's setName and getName member functions. 
	std::string name; // data member containing account holder's name
}; // end class Account