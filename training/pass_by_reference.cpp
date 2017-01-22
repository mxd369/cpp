#include <iostream>
using namespace std;
void Test(int &Number)
{
	cout << Number << endl;
	Number++;
	cout << Number << endl;
}

int main()
{
	int MyNum = 1;
	Test(MyNum);
	cout << MyNum << endl;
	return 0;
}