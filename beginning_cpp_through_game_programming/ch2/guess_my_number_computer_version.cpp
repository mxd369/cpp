// Guess My Number
// The classic number guessing game

/*
Guess My Number, is the classic number guessing game:
For those who missed out on this game in their childhood, it goes like this:
The computer chooses a random number between 1 and 100,
and the player tries to guess the number in as few attempts as possible.
Each time the player enters a guess,
the computer tells him whether the guess is too high,
too low,
or right on the money.
Once the player guesses the number,
the game is over.


new version of the Guess My Number program in which the
player and the computer switch roles. That is, the player picks a number
and the computer must guess what it is.

*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	// seed random number generator
	srand(static_cast<unsigned int>(time(0)));
	
	// generate random number
	int randomNumber = rand();
	
	// get a number between 1 and 100
	int number = (randomNumber % 100) + 1;
	
	// test if the randomNumber is between 1 and 100  
	//cout << "The number is: " << number << '\n' << endl;	
	
	// the main game section use a do while loop
	
	// intialize int userNumber
	int userNumber;
	
	// initialize int tries
	int tries = 0;
	
	do
	{
	    // tell the user to input a number
	    cout << "Please enter a number that is between 0 and 100: " << '\n' << endl;
	   
	    cin >> userNumber;
	
	    // increment the users tries
		++tries;
		
	    //compare the userNumber to the number randomly generated
	    if(userNumber == number)
	    {
		    cout << "Right on the money! Your Number is " << userNumber << " and the Magic Number is " << number << " it took you " << tries << " number of tries"<< '\n' <<endl;
	    }
	    else if(userNumber >= number)
	    {
		    cout << "Your number is: " << userNumber << " and it is too high! Try again\n";
	    }
	    else if(userNumber <= number)
	    {
		    cout << "Your number is: " << userNumber << " and it is too low! Try again\n";
	    }
	    else
	    {
		    cout << "error!";
	    }
	} while(userNumber != number);

	return 0;
}