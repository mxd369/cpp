//practice programming assignment 1

/*
Practice Programming Assignment (PPA 01)

A CS101 student wants to assign the value to the variable 'ageResult' based on the age of a person.
The value of age is itself stored in a variable 'age'.
The table given below mentions the conditions using which the number needs to be assigned to 'ageResult'.

Condition for age	Assign value to variable ageResult
Less than 0	        -1
0 to 5 	            0
6 to 12	            1
13 to 19            2
20 to 50	        3
51 to 60	        4
61 to 101 	        5
Greater than 101	-1
*/
/*
Question      : Write your code to assign value -1 to 5 to the variable 'ageResult', depending on the value of variable 'age'.
int age       : Age of a person
int ageResult : Store the resultant value in this variable
*/
#include <iostream>
using namespace std;

//function
void detectAgeResult(int age, int &ageResult) {
	//Write your solution code below this line
	//int ageResult;
	//cout << "Please enter your age: " ;
	//cin >> ageResult;
	if(age < 0) {
		ageResult = -1;
	}
	else if((age >= 0) && (age <= 5)){
		ageResult = 0;
	}
	else if((age >= 6)&&(age<= 12)){
		ageResult = 1;
	}
	else if((age >= 13)&&(age <= 19)){
		ageResult = 2;
	}
	else if((age >= 20)&&(age <= 50)){
		ageResult = 3;
	}
	else if((age >= 51)&&(age <= 60)){
		ageResult = 4;
	}
	else if((age >= 61)&&(age <= 101)){
		ageResult = 5;
	}
	else if(age > 101){
		ageResult = -1;
	}
	else{
		//cout << "Error" << '\n';
	}
    //return ageResult;
}

int main()
{
	//cout << "Hello World!";
	int x;
	x = ageResult(5,2);
	cout << "ageResult: " << ageResult << '\n';
	//return 0;
	
}











