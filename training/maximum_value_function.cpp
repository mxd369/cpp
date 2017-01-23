// maximum_value_function.cpp
// returns the largest integer value of three integers
#include <iostream>
#include <iomanip>
using namespace std;
int maximum(int x, int y, int z);// function prototype
int main(){
	int int1, int2, int3;
	cout << "Enter 3 integer values: " << endl;
	cin >> int1 >> int2 >> int3;
	// invoke maximum function
	cout << "The maximum integer value is: " << maximum(int1, int2, int3) << endl;
	return 0;
}
int maximum(int int1, int int2, int int3){
	int maximum;
	if(int1 > int2 && int1 > int3){ maximum = int1;}
	if(int2 > int1 && int2 > int3){ maximum = int2;}
	if(int3 > int2 && int3 > int1){ maximum = int3;}
	return maximum;
}
