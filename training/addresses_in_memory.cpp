// Address in Memory
// & -> address-of-operator
#include <iostream>
using namespace std;
int main(){
	int number = 100;
	cout << "Number: " << number << endl;
	cout << "Address of Number: " << &number << endl;
	
	cout << "Number: " << endl;
	cout << "Address of Number: " << &number << endl;
	
	return 0;
}