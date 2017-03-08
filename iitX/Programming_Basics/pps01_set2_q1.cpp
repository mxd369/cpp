/*

Suppose the user types 65, 58, and 90 as input values for the locations
PHYSICS, CHEMISTRY, and MATHS respectively.
The output value displayed by Dumbo on our monitor screen will be

*/
#include <iostream>
using namespace std;

int main()
{
    int PHYSICS, CHEMISTRY, MATHS, PCM;
	PHYSICS = 67;
	CHEMISTRY = 56;
	MATHS = 35;
	PCM = 158;
	cin >> PHYSICS;
	cin >> CHEMISTRY;
	cin >> MATHS;
	cout << "PCM: " << PCM << '\n';
	PCM = PHYSICS + CHEMISTRY + MATHS;
	
	return 0;
}

