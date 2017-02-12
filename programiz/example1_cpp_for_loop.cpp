/* https://www.programiz.com/cpp-programming/for-loop

factorial calculator: 

http://www.calculatorsoup.com/calculators/discretemathematics/factorials.php


for(initializationStatement; testExpression; updateStatement) {
    // codes 
}
*/
#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	int n = 0;
	int factorial = 1;

	cout << "Enter a positive integer: ";
	cin >> n;

	for (i = 1; i <= n; ++i) {
		factorial *= i;	// factorial = factorial * i;
	}

	cout << "Factorial of " << n << " = " << factorial << endl;
	return 0;
}