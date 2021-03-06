// https://www.programiz.com/cpp-programming/examples/prime-number

#include <iostream>
using namespace std;

int main()
{
  int n;
  int i;
  bool isPrime = true;

  cout << "Enter a positive integer: ";
  cin >> n;

  for(i = 2; i <= n / 2; ++i)
  {
      if(n % i == 0)
      {
          isPrime = false;
          break;
      }
  }

  if (isPrime)
      cout << "This is a prime number";
  else
      cout << "This is not a prime number" << endl;

  return 0;
}