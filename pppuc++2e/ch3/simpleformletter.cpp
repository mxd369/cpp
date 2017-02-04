#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    cout<<"Please enter your first name to be addressed in a letter followed by (enter)\n";
	string first_name;
	cin>>first_name;
	cout<<"Dear, "<<first_name<<'\n';
	cout<<"    How are you? I am fine. I miss you "<<first_name+"."<<'\n';
	cout<<"Please enter the name of our friend followed by (enter)\n";
	string friend_name;
	cin>>friend_name;
	cout<<"Have you seen "<<friend_name<<" lately?\n";
	char friend_sex = 0;
	cout<<"Please enter an m if "<<friend_name<<" is a male and an f if "<<friend_name<<" a female\n";
    cin>>friend_sex;
	if(friend_sex == 'm')
	{
		cout<<"If you see "<<friend_name<<" please as him to call me\n";
	}
	else if (friend_sex == 'f')
	{
		cout<<"If you see "<<friend_name<<" please as her to call me\n";
	}
	//ask for age
	cout<<"What is the age of "<<friend_name<<"?\n";
	int age;
	cin>>age;
	cout<<"I hear you just had a birthday and you are "<<age<<" years old.\n";
	if(age <= 0 && age >= 110)
	{
		cout<<"you're kidding!\n";
	}
	else if(age < 12)
	{
	    cout<<"Next year you will be "<<age+1;	
	}
	else if(age == 17)
	{
		cout<<"Next year you will be able to vote.";
	}
	else if(age > 70)
	{
		cout<<"I hope you are enjoying retirement.";
	}
	cout<<"Yours sincerely \n\n Mokoto.";
	
}