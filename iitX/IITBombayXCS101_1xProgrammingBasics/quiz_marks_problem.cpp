#include <iostream>
using namespace std;
int main()
{
	int marks, sum, count, min, max;
	float average;
	for(sum = 0, count = 1;  ;count++)
	{
		cout << "Give marks of student " << count << ":";
		cin >> marks;
		if(marks < 0)
		{
			if(marks != -1000)
			{
				cout << "Invalid marks!" << endl; continue; //... Repeat loop ...
			}
			else
			{
				cout << "All marks read!" << endl; break;
			}
		}
		// Update sum, min, max
	}
	average = sum/(count + 0.0);
	cout << "Count of valid marks: " << count << "Sum:" << sum;
	cout << "Average:" << average << "Min:" << min << "Max:" << max << endl;
	return 0;
}
