#include<string>
#include<iostream>

using namespace std;

	int toBinary(int);
	string toHex(int);
	int toOctal(int);

	int main()
	{
		string str;
		for(int i=0;i<=65535;i++)
{

if(i%3==0)str="Go";
else if(i%5==0)str="GOGOGO";
else str="S";
cout<<"\n0b"<<toBinary(i)<<"\t"<<toHex(i)<<"\t"<<toOctal(i)<<"\t" <<i<<"\t"<<str;
}
return 0;
}
int toOctal(int num)
{
int total = 0;
while(num > 0)
{
total = num % 8;
num /= 8;
cout << total << " ";
}
return total;
}
int toBinary(int num)
{
int total = 0;
while(num > 0)
{
total = num % 2;
num /= 2;
}
return total;
}
string toHex(int num)
{
char hexdecnum[100];
int temp;
string final;
int quot;
quot=num;
int i=1;
while(quot!=0)
{
temp=quot%16;
// to convert integer into character
if(temp<10)
{
temp=temp+48;
}
else
{
temp=temp+55;
}
hexdecnum[i++]=temp;
quot=quot/16;
}
final=hexdecnum;
return final;
}