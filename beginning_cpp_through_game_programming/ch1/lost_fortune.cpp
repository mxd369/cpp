// Lost Fortune
// A personalized adventure

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{


	//GOLD_PIECES is a constant that stores the number of gold pieces
	const int GOLD_PIECES = 900;
	//adventurers stores the number of adventurers on the quest
	//killed stores the number that are killed on the journey
	//survivors is the number of adventurers that remain
	int adventurers, killed, survivors;
	//stores the player's last name
	string leader;
	
	//get the information
	cout << "Welcome to Lost Fortune\n\n";
	cout << "Please enter the following for your personalized adventure\n";
	
	cout << "Enter a number: ";
	cin >> adventurers;
	
	cout << "Enter a number, smaller than the first: ";
	cin >> killed;
	
	survivors = adventurers - killed;
	
	cout << "Enter your last name: ";
	cin >> leader;
	
	
	
	
	//tell the story
	cout << "\nA brave group of " << adventurers << " set out on a quest ";
	cout << "- in the search of the lost treasure of the Ancient Dwarves. ";
	cout << "The group was led by that legendary rogue, " << leader << ".\n";
	
	cout << "\nAlong the way, a band of marauding orges ambushed the party. ";
	cout << "All fought bravely under the command of " << leader;
	cout << ", and the orges were defeated, but at a cost. ";
	cout << "Of the adventurers, " << killed << " were vanquished, ";
	cout << "leaving just " << survivors << " in the group.\n";
	
	cout << "\nThe team was about to give up all hope. ";
	cout << "But while laying the deceased to rest, ";
	cout << "they stumbled upon the buried fortune. ";
	cout << "So the adventurers split " << GOLD_PIECES << " gold pieces." ;
	cout << leader << " held on to the extra " << (GOLD_PIECES % survivors);
	cout << " pieces to keep things fair of course.\n";
	
	return 0;
	
}