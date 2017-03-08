#include <iostream>
using namespace std;
int main() {
  int num1 = 4;
  int counter = 0;
  for (counter = 0 ; counter <= 4 ; counter+=2){
    switch(counter){
      case 1:
        num1++;
      break;
      case 2:
        num1 += 2;
      case 4:
        num1 %= 2;
        counter = -1;
      continue;
      default:
        --num1;
      continue;
    }
  }
  //cout << counter-num1;
  return 0;
}      
