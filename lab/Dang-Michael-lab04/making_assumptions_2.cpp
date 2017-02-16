#include <iostream>
using namespace std;
int main(){
	unsigned long addr = 0x00007ffd0f811b84;
	short * sp = reinterpret_cast<short *>(addr);
	cout << sp << endl;       // 0x00007ffd0f811b84
	cout << (sp + 1) << endl; // (a)
	cout << (sp + 2) << endl; // (b)
	cout << (sp + 3) << endl; // (c)
	cout << (sp + 4) << endl; // (d)
	return 0;
}
/*
2. What is the output the marked lines below, in hexadecimal (base-16)?
unsigned long addr = 0x00007ffd0f811b84;
short * sp = reinterpret_cast<short *>(addr);
cout << sp << endl; // 0x00007ffd0f811b84
cout << (sp + 1) << endl; // (a)
cout << (sp + 2) << endl; // (b)
cout << (sp + 3) << endl; // (c)
cout << (sp + 4) << endl; // (d)
(a)
(b)
(c)
(d)
(e) Why did we have to use reinterpret cast to force the assignment of the arbitrary address to the pointer instead of a simple, direct assignment?
*/
/*
http://en.cppreference.com/w/cpp/language/reinterpret_cast
*/
/*
$ ./making_assumptions_2
0x7ffd0f811b84
0x7ffd0f811b86
0x7ffd0f811b88
0x7ffd0f811b8a
0x7ffd0f811b8c
*/

/*
$ ./making_assumptions_2
(a)   0x7ffd0f811b84
(b)   0x7ffd0f811b86
(c)   0x7ffd0f811b88
(d)   0x7ffd0f811b8a
0x7ffd0f811b8c
*/