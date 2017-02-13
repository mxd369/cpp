/*
armstrong.cpp:
Write a program that prints out all Armstrong numbers, each on their own line.
An Armstrong number is a three digit integer such that the sum of the cubes
of its digits is equal to the number itself.

For example,
371 is an Armstrong number since 3^3 + 7^3 + 1^3 = 371.
Remember, you do not need nor should you use an array to solve this problem.

piazza note: 100 to 999.

In lab he said leading 0s do not count so those would be 2-digit numbers whereas the lab asks for all 3-digit armstrong numbers

100 to 999.
~ An instructor (Jackson Wright) endorsed this answer  ~
Alec Repczynski

1,2,3,4, 5, 6, 7, 8, 9, 153, 370, 371, 407, 1634.
*/
#include <iostream>
using namespace std;
int main ()
{
  /*
  for(int i = 0; i <= 999; i++){
    if (i){
      cout << i << endl;
    }
  }
  return 0;
*/
	int start = 2;
	int end = 999;
	int i;
	int num;
	int numberValue;
	int sum;
	// for loop
	for(i = start; i <= end; i++){
		sum = 0;
		num = i;
		// nested for loop
		for(; num > 0; num /= 10){
			numberValue = num % 10;
			sum = sum + numberValue * numberValue * numberValue;
		}
		// conditional
		if(sum == i) {
			cout << i << endl;
		}
	}
	return 0;
}
/*
1 is an armstrong number
999 is not an armstrong number
*/
/*
$ ./armstrong
1
153
370
371
407
*/
/*
programiz
#include <iostream>
using namespace std;

int main()
{
  int origNum;
  int num;
  int rem;
  int sum = 0;
  int numberValue;
  cout << "Enter a positive  integer: ";
  cin >> origNum;

  num = origNum;

  while(num != 0)
  {
      numberValue = num % 10;
      sum += numberValue * numberValue * numberValue;
      num /= 10;
  }

  if(sum == origNum)
    cout << origNum << " is an Armstrong number.";
  else
    cout << origNum << " is not an Armstrong number.";

  return 0;
}
*/