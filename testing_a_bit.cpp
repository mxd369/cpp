// testing_a_bit.cpp
#include <iostream>
using namespace std;
#define MASK0 0x01
#define MASK1 0x02
#define MASK2 0x04
#define MASK3 0x08
int main()
{
	char flags=0x05;
	if((flags&MASK3)==MASK3)
		cout<<"Letter A\n";
	else
		cout<<"No Letter A\n";
	if((flags&MASK2)==MASK2)
		cout<<"Letter B\n";
	else
		cout<<"No Letter B\n";
	if((flags&MASK1)==MASK1)
		cout<<"Letter C\n";
	else
		cout<<"No Letter C\n";
	if((flags&MASK0)==MASK0)
		cout<<"Letter D\n";
	else
		cout<<"No Letter D\n";
	return 0;
}
/*
No Letter A
Letter B
No Letter C
Letter D
*/