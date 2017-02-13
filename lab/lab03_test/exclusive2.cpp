//exclusive no.
#include<iostream>
using namespace std;

int main()
{
int num, n, exclusive = 0;
cout<<"Enter number of odd integers: ";
cin>>n;
cout<<"Enter Integers: ";
while(n!=0)
{
cin>>num;
exclusive = exclusive ^ num;
n--;
}
cout<<"Exclusive Number: "<<exclusive;
return 0;
}//end of main function