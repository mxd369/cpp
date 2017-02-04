#include <iostream>
using namespace std;
int main()
{
	int weather;
	cin >> weather;
	if ( weather <= 1) {
		cout << " Grilled " ;
	}
	else if ( weather >= 3) {
		cout << " Freezed " ;
	}
	else {
		cout << " Room Temperature " ;
	}
}