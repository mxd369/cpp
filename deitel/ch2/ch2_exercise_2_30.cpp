/*
2.30 (Body Mass Index Calculator) We introduced the body mass index (BMI) calculator in Exercise 1.9. The formulas for calculating BMI are

	BMI = weightInPounds * 703 / heightInInches * heightInInches

or

	BMI = weightInKilograms / heightInMeters

Create a BMI calculator application that reads the user’s weight in pounds and height in inches (or, if you prefer, the user’s weight in kilograms and height in meters), then calculates and  the user’s body mass index. Also, the application should display the following information from the Department of Health and Human Services/National Institutes of Health so the user can evaluate his/her BMI:


BMI VALUES
Underweight: less than 18.5
Normal:		 between 18.5 and 24.9
Overweight:	 between 25 and 29.9
Obese:		 30 or greater


[Note: In this chapter, you learned to use the int type to represent whole numbers. The BMI calculations when done with int values will both produce whole-number results. In Chapter 4 you’ learn to use the double type to represent numbers with decimal points. When the BMI calculations are performed with doubles, they’ll both produce numbers with decimal points—these are called
“floating-point” numbers.]

*/
#include <iostream>
using namespace std;

int main(){
	int weightInPounds{0};
	int heightInInches{0};
	int BMI;
	cout << "Give your weight in pounds and height in inches: ";
	cin >> weightInPounds >> heightInInches;

	BMI = (weightInPounds * 703) / (heightInInches * heightInInches);
	
	if (BMI < 18.5) {
		cout << "BMI = Underweight: less than 18.5" << endl;
	}
	if (BMI >= 18.5 && BMI <= 24.9) {
		cout << "BMI = Normal: between 18.5 and 24.9" << endl;
	}
	if (BMI >= 25 && BMI <= 29.9) {
		cout << "BMI = Overweight: between 25 and 29.9" << endl;
	}
	if (BMI > 30){
		cout << "BMI = Obese: 30 or greater" << endl;
	}
	return 0;
}
/*
$ ./ch2_exercise_2_30
Give your weight in pounds and height in inches: 175
70
BMI = Overweight: between 25 and 29.9

$ ./ch2_exercise_2_30
Give your weight in pounds and height in inches: 172
70  
BMI = Normal: between 18.5 and 24.9
*/