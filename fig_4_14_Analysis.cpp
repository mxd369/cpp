// Fig. 4.14: Analysis.cpp
// Analysis of examination results using nested control statements.
#include <iostream>
using namespace std;
int main() {
    // initializing variables in declarations
    unsigned int passes{0};
    unsigned int failures{0};
    unsigned int studentCounter{1};

    // process 10 students using counter-controlled loop
    while (studentCounter <= 10) {
        // prompt user for input and obtain value from user
        cout << "Enter result (1= pass, 2 = fail): ";
        int result;
        cin >> result;

        // if...else is nested in the while statement
        if (result == 1) {
            passes = passes + 1;
        }
        else {
    	    failures = failures + 1;
        }

        // increment studentCounter so loop eventually terminates
        studentCounter = studentCounter + 1;
    }

    // termination phase; prepare and display results
    cout << "Passed: " << passes << "\nFailed: " << failures << endl;

    // determine whether more than 8 students passed
    if (passes > 8) {
      cout << "Bonus to instructor!" << endl;
    }
}
/*
$ g++ -c fig_4_14_Analysis.cpp
$ g++ -o fig_4_14_Analysis fig_4_14_Analysis.o
$ ./fig_4_14_Analysis
Enter result (1= pass, 2 = fail): 1
Enter result (1= pass, 2 = fail): 2
Enter result (1= pass, 2 = fail): 1
Enter result (1= pass, 2 = fail): 1
Enter result (1= pass, 2 = fail): 1
Enter result (1= pass, 2 = fail): 1
Enter result (1= pass, 2 = fail): 1
Enter result (1= pass, 2 = fail): 1
Enter result (1= pass, 2 = fail): 1
Enter result (1= pass, 2 = fail): 1
Passed: 9
Failed: 1
Bonus to instructor!
*/
