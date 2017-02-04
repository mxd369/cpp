#include <iostream>
using namespace std;

int main()
{
	int NBOYS, NGIRLS, NSTUDENTS;
	NBOYS = 35;
	NGIRLS = 124;
	NSTUDENTS = 80;

	//Input NBOYS;
	cout << "NBOYS: " ;
	cin >> NBOYS;

	//Input NGIRLS;
	cout << "NGIRLS: " ;
	cin >> NGIRLS;

	//Output NSTUDENTS;
	cout << "NSTUDENTS: " << NSTUDENTS << '\n';

	NSTUDENTS = NBOYS + NGIRLS;
	return 0;
}
