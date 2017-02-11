#include <iostream>
using namespace std;
int main(){
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