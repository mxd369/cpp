/*
(Employee Class) Create a class called Employee that includes three pieces of information as data members—a first name (type string), a last name (type string) and a monthly salary (type int). [Note: In subsequent chapters, we’ll use numbers that contain decimal points (e.g., 2.75)— called floating-point values—to represent dollar amounts.] Your class should have a constructor that initializes the three data members. Provide a set and a get function for each data member. If the monthly salary is not positive, set it to 0.
*/

// Define class Employee with three data members
// member functions to set and get its values
// Create and manipulate an Employee object

#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

// Employee class definition
class Employee
{
public: //constructor for Employee class
	Employee(string fname, string lname, int salary) {
		setFirstName(fname);
		setLastName(lname);
		setMonthlySalary(salary);
	}// end constructor

	// function that sets the First Name
	void setFirstName(string fname) {
		first_name = fname; // store the firt name in the object
	} // end of function setFirstName

	// function that sets the Last Name
	void setLastName(string lname) {
		last_name = lname; // store the last name in the object
	} // end of function setLastName

	// function that sets the Montly Salary
	void setMonthlySalary(int salary)
	{
		if (salary <= 0)
			salary = 0;
		if (salary > 0)
			monthly_salary = salary; // store the monthly salary in the object
	}

	// function that gets the first name
	string getFirstName() {
		return first_name; // return the object's first name
	}// end of function getFirstName

	// function that gets the last name
	string getLastName() {
		return last_name; // return the object's last name
	}// end of function getLastName

	// function that gets the Monthly Salary
	int getMonthlySalary() {
		return monthly_salary; // return the object's monthly salary
	}// end of function getMonthlySalary

private:
	string first_name;		// First name for this employee
	string last_name;		// Last name for this employee
	int monthly_salary;		// Monthly Salary for this employee
};