// modified program for mr. dumbo

#include <iostream>

using namespace std;

int main()
{
	int NBOYS, NGIRLS, NSTUDENTS;

	cout << "Enter number of boys: ";
	cin >> NBOYS;
	
	cout << "Enter number of girls: ";
	cin >> NGIRLS;
	
	NSTUDENTS = NBOYS + NGIRLS;
	
	cout << "The total number of students is: "<< NSTUDENTS << '\n';
	
	return 0;
}
