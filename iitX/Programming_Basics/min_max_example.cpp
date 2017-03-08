#include <iostream>
using namespace std;

int main(){
  int minMN = 0, maxMN = 0, twoRaisedMax = 1, threeRaisedMin = 1;
  int m, n, i, j;                           //Inputs and running counters
  cout << "Give m and n: "; cin >> m >> n;
  for (i=m,j=n;((i>=1)||(j>=1));i--,j--)    //Iterate max(m,n) times
    { if ((i>=1)&&(j>=1)){ 
        minMN++; threeRaisedMin *= 3;       //Conditionally iterate min(m,n) times 
      }
        maxMN++; twoRaisedMax *= 2;         //Execute max(m,n) times
    }
    cout << "2^max is: " << twoRaisedMax << ",3^min is: " << threeRaisedMin;
    return 0;
  }
