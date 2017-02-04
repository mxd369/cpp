#include <iostream>
using namespace std;
int main()
{
	int number1,number2;
	cout << "Give 1 and 2" << endl;
	cin >> number1 >> number2;
	if(number1 >= 1)
        cout<<"Good ";

	if( (number1 == 1) && (number2 > 2) )
	cout<<"Morning ";

	if( (number1 <= 1) && (number2 >= 2) )
	cout<<"Afternoon";

	if( (number1 > 1) && (number2 >2) )
	cout<<"Evening";
	
	return 0;
}
