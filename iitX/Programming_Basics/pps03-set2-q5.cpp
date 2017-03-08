#include<iostream>
using namespace std;
int main() {
  int i, countIf = 0, countElse = 0;
  for (i = 1; i < 5; i++)
    if ((i * i * i + 2) > ( i * i + 3))
      countIf++;
    else
      countElse++;
  cout << countIf << "," << countElse;
  return 0;
}
