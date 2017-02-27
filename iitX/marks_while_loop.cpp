#include <iostream>
using namespace std;

int main() {
  
  int marks, min, max, numStudents;
  int sum = 0;
  float average, count; // Variable declarations
  
  cout << "Give number of students: ";
  cin >> numStudents;
  
  count = 1.0; // Count of student marks processed
  
  while (count <= numStudents) {
    cout << "Give " << marks << " of student " << count << " ";
	cin >> marks;
    // Update sum, max, min
    count = count + 1;
  }
  average = sum/count;
  // Print average, sum, min, max
  return 0;
}