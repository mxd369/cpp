/*
3.9
(Modified Account Class) Modify class Account (Fig. 3.8) to provide member function called withdraw that withdraws money from an Account. Ensure that the withdrawal amount does not exceed the Account's balance. If it does, the balance should be left unchanged and the member function should display a message indicating "Withdrawal amount exceeded account balance." Modify class AccountTest (Fig 3.9) to test member function withdraw.
*/

// Account class with name and balance data members, a constructor and deposit function that each perform validation
#include <string>

class Account
{
public:
	// Account constructor with two parameters
	Account(std::string accountName, int initialBalance)
		: name{accountName} { //assign accountName to data memeber name

		// validate that the initialBalance is greater than 0; if not,
		// data member balance keeps its default initial value of 0
		if (initialBalance > 0) { // if the initialBalance is valid
			balance = initialBalance; // assign it to data member balance
		}
	}

    // function that deposits (adds) only a valid amount to the balance
    void deposit(int depositAmount) {
       if (depositAmount > 0) { // if the depositAmount is valid
          balance = balance + depositAmount; // add it to the balance 
       }
    }

    // function returns the account balance
    int getBalance() const {
       return balance;
    }



	/*
	withdraw: withdraws money from Account
	withdrawal amount does not exceed the Account's valance, if it does,
	leave balance left unchanged,
	member function should display message indicating "withdrawal amount exceeded account balance."
	*/
    /* function that withdraws (deducts) only a valid amount from the balance*/
	void withdraw(int withdrawAmount){
		if(withdrawAmount > balance){
			std::cout << "\n withdrawal amount exceeded account balance.";
		}
		else{
			balance = balance - withdrawAmount;
		}
	}
	



    // function that sets the name
    void setName(std::string accountName) {
       name = accountName;
    }

    // function that returns the name
    std::string getName() const {
       return name;
    }

private:
	std::string name;//account name data member
	int balance{0};// data member with default initial value
}; // end class Account