#include <iostream>
using namespace std;
int main()
{
	int weather;
	cin >> weather;

	switch(weather){
		case 1:
			cout << " Grilled " ;
		break;
		case 3:
			cout << " Freezed " ;
		break;
		default:
			cout << " Room Temperature ";
	}

	return 0;
}
