/*
armstrong.cpp:
Write a program that prints out all Armstrong numbers, each on their own line. An Armstrong number is a three digit integer such that the sum of the cubes of its digits is equal to the number itself.

For example,
371 is an Armstrong number since 3^3 + 7^3 + 1^3 = 371.
Remember, you do not need nor should you use an array to solve this problem.

piazza note: 100 to 999.
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

  int start = 1;
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