#include <iostream>
using namespace std;
int main()
{
	int date, time, hash; // Variable declarations
	cout << "Give date (DDMMYYYY) and time (HHMM)" << endl;
	cin >> date >> time;
	hash = (date + time) % 3; // Compute a hash value in {0,1,2}

	if (hash == 0){ cout << "Time and tide wait for none." << endl;}
	else{
		if(hash==1){cout << "The pen is mightier than the sword." << endl;}
		else{cout << "Where there is a will, there is a way." << endl;}
	}
	return 0;
}
