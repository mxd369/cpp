#include <iostream>
using namespace std;
int main()
{
	int marks, sum, min, max; float average;
	// Variable declaraiton and initialization of aggregates
	int numStudents, count;
	cout << "Give number of students in CS101:"; cin >> numStudents;
	count = 1;
	// Repeat the following block of code 10 times
	while(count <= numStudents)
	{
		cout << "Give marks of student " << count << ": ";
		cin >> marks;
		sum = sum + marks;
		if (count == 1) {
			min = marks; max = marks; }
		else {
			min = (min > marks) ? marks:min;
			max = (max < marks) ? marks: max;
		}
	count = count + 1;
	} // End of block of code to be repeated
	average = sum/count;
	return 0;
}