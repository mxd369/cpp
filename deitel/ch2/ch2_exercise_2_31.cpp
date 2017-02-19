/*
(Car-Pool Savings Calculator) Research several car-pooling websites. Create an application that calculates your daily driving cost, so that you can estimate how much money could be saved by car pooling, which also has other advantages such as reducing carbon emissions and reducing traffic congestion. The application should input the following information and display the user’s cost per day of driving to work:

a) Total miles driven per day.
b) Cost per gallon of gasoline.
c) Average miles per gallon.
d) Parking fees per day.
e) Tolls per day.

*/
#include <iostream>
using namespace std;

int main(){
	int Total_miles_driven_per_day{0};
	float Cost_per_gallon_of_gasoline{0};
	int Average_miles_per_gallon{0};
	int Parking_fees_per_day{0};
	int Tolls_per_day{0};
	int User_cost_per_day_driving_to_work{0};
	int User_cost_per_day_driving_to_work_and_back{0};

	cout << "Enter Total miles driven per day: ";
	cin >> Total_miles_driven_per_day ;
	cout << "Enter Cost per gallon of gasoline: ";
	cin >> Cost_per_gallon_of_gasoline ;
	cout << "Enter Average miles per gallon: ";
	cin >> Average_miles_per_gallon ;
	cout << "Enter Parking fees per day: ";
	cin >> Parking_fees_per_day ;
	cout << "Enter Toll fees per day: ";
	cin >> Tolls_per_day;

	User_cost_per_day_driving_to_work = Total_miles_driven_per_day * (Cost_per_gallon_of_gasoline / Average_miles_per_gallon) +  Parking_fees_per_day + Parking_fees_per_day + Tolls_per_day;
	User_cost_per_day_driving_to_work_and_back = User_cost_per_day_driving_to_work * 2;
	
	//total miles driven per day = 50
	// 30 miles per gallon
	// cost per gallon = 2.50
	
	cout << "Your cost to drive to work per day is: " << User_cost_per_day_driving_to_work << endl;
	cout << "Your cost to drive to work and back per day is: " << User_cost_per_day_driving_to_work_and_back << endl;
	return 0;
}
/*
$ ./ch2_exercise_2_31
Enter Total miles driven per day: 50
Enter Cost per gallon of gasoline: 2.50
Enter Average miles per gallon: 30
Enter Parking fees per day: 0
Enter Toll fees per day: 0
Your cost to drive to work per day is: 4
Your cost to drive to work and back per day is: 8
*/