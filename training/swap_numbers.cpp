// Program for swapping numbers
#include <iostream>
using namespace std;

// call by reference paradigm 

int swap(int &m, int &n);

int main()
{
  int status;
  cout << "Give two integers: ";
  cin >> a >> b;
  status = swap(a, b);
  cout << "a: " << a << " b: " << b << endl;
  return 0;
}

int swap(int &m, int &n)
{
  int temp;
  temp = m;
  m = n;
  n = temp;
  return 0;
}
