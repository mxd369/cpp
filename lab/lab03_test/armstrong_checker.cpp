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