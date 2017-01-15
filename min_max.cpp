#include <iostream>
using namespace std;
int main()
{
	// declaration and initialization of variables
	int minMN = 0, maxMN = 0, twoRaisedMax=1, threeRaisedMin = 1;
	
	// Inputs and running counters
	int m, n, i, j; // ask for the values m and n
	cout << "Give m and n: "; // read in the values of m and n
	cin >> m >> n;
	
	// iterate max(m, n) times
/*
for (i = m, j = n; ((i >= 1) || (j >= 1)); i--,j--){}
I create one single 'for' loop:

Initialization Part:
i = m, j = n;
In the initialization part, I have used two assignment expressions separated by a comma. Recall that this becomes one compound expression in which the component expressions are evaluated from left to right, and when these assignment expressions are evaluated, as their side effect, the value of m gets assigned to the variable i, the value of n gets assigned to the variable 'j'.
So, as a result of evaluating this compound expression, I have effectively
initialized the values of i and j to those of m and n through side effects.
,
Check Part:
((i >= 1) || (j >= 1))
I'm going to check if, the value of 'i' is > = 1, or the value of 'j' is > = 1.
,
Update Expression:
i--, j--
What is the update expression? It is the post-decrement operator applied on i and j
once again separated by comma. So, once again this is a compound update expression composed of two component expressions. The way this compound expression is going to be evaluated is that the component expressions will be evaluated from left to right,
and these post-decrement expressions, when they're evaluated as a side effect, they will effectively decrease the values of i and j. So, I'm going to start with the values of i and j set to m and n, and I'm going to decrement them in every iteration.


Logic:
Clearly, this loop is going to iterate 'max(m,n)' times, because, as long as one of i or j, which have been initialized to m and n, stays greater than equal to 1, I'm going to iterate in this loop.
*/
	for (i = m, j = n; ((i >= 1) || (j >= 1)); i--,j--)
	{
		if((i>=1)&&(j>=1))
		{
			minMN++;
			threeRaisedMin *= 3; // conditionally iterate min(m,n) times
		}
		maxMN++;
		twoRaisedMax *= 2; // execute max(m, n) times
	}
	// output result
	cout << "2^max is: " << twoRaisedMax << ",3^min is: " << threeRaisedMin << endl;
	return 0;// return control back to OS
}