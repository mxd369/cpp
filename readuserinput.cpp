#include <iostream>
#include <sstream>
using namespace std;
int main()
{
	string x;
	getline(cin, x);

	int sum;
	int a;
	int count;
	int avg;

	stringstream y(x);

	while (y >> a){
		sum += a;
		++count;
	}

	avg = sum/count;

	cout << "avg: " << avg << endl;

	return 0;
}