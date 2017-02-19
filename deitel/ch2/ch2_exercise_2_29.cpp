/*
(Table) Using the techniques of this chapter, write a program that calculates the squares and cubes of the integers from 0 to 10. Use tabs to print the following neatly formatted table of values:

integer square  cube
0 		0 		0
1 		1 		1
2 		4 		8
3 		9 		27
4 		16 		64
5 		25 		125
6 		36 		216
7 		49 		343
8 		64 		512
9 		81 		729
10 		100 	1000
*/
#include <iostream>
using namespace std;

int main(){
	cout << "integer " << "square " << "cube " << endl;
	for (int i = 0; i <= 10 ;i++){
		cout << i << "\t" << i*i << "\t" << i*i*i << endl;
	}
	cout << "integer " << "square " << "cube " << endl;
	cout << "0\t" << 0*0 << "\t"<< 0*0*0 << endl;
	cout << "1\t" << 1*1 << "\t"<< 1*1*1 << endl;
	cout << "2\t" << 2*2 << "\t"<< 2*2*2 << endl;
	cout << "3\t" << 3*3 << "\t"<< 3*3*3 << endl;
	cout << "4\t" << 4*4 << "\t"<< 4*4*4 << endl;
	cout << "5\t" << 5*5 << "\t"<< 5*5*5 << endl;
	cout << "6\t" << 6*6 << "\t"<< 6*6*6 << endl;
	cout << "7\t" << 7*7 << "\t"<< 7*7*7 << endl;
	cout << "8\t" << 8*8 << "\t"<< 8*8*8 << endl;
	cout << "9\t" << 9*9 << "\t"<< 9*9*9 << endl;
	cout << "10\t" << 10*10 << "\t"<< 10*10*10 << endl;
	return 0;
}
/*
$ ./ch2_exercise_2_29
integer square cube 
0	0	0
1	1	1
2	4	8
3	9	27
4	16	64
5	25	125
6	36	216
7	49	343
8	64	512
9	81	729
10	100	1000
integer square cube 
0	0	0
1	1	1
2	4	8
3	9	27
4	16	64
5	25	125
6	36	216
7	49	343
8	64	512
9	81	729
10	100	1000
*/