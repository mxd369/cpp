// Menu Chooser
// Demonstrates the switch statement

#include <iostream>

using namespace std;

int main()
{
	
	enum choice { EASY, NORMAL, HARD };
	
	cout << choice(0) << '\n';
	cout << choice(1) << '\n';
	cout << choice(2) << '\n';

    int choice;
    cout << "Choice: ";
    cin >> choice;

    switch(choice)
    {
    case 1:
        cout << "You picked Easy.\n";
        break;
    case 2:
        cout << "You picked Normal.\n";
        break;
    case 3:
        cout << "You picked Hard.\n";
        break;
    default:
        cout << "You made an illegal choice.\n";
    }
    
    return 0;
}
