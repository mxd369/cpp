/*
Write a test program that demonstrates class Employee’s capabilities. Create two Employee objects and display each object’s yearly salary. Then give each Employee a 10 percent raise and display each Employee’s yearly salary again.
*/
#include <iostream>
#include "EmployeeSolution.h"
using namespace std;
int main()
{
	int yearly_salary;		// integer to calculate yearly salary
	int salary_raise;		// integer to calculate salary raise
	int revised_salary;		// integer to calculate revised salary

	// create two Employee Objects
	Employee employeeA("AAA", "NNN", 1000);
	Employee employeeB("SSS", "QQQ", 1500);

	// Display initial values of employeeA object
	cout << "Employee-A Full Name: " << employeeA.getFirstName() << endl;
	cout << "Employee-A Full Name: " << employeeA.getLastName() << endl;
	cout << "Employee-A Full Name: " << employeeA.getMonthlySalary() << endl;

	// Display initial values of employeeB object
	cout << "Employee-B Full Name: " << employeeB.getFirstName() << endl;
	cout << "Employee-B Full Name: " << employeeB.getLastName() << endl;
	cout << "Employee-B Full Name: " << employeeB.getMonthlySalary() << endl;
	
	yearly_salary = 12 * employeeA.getMonthlySalary();
	cout << "Employee-A Yearly Salary : " << yearly_salary << endl;

	yearly_salary = 12 * employeeB.getMonthlySalary();
	cout << "Employee-B Yearly Salary : " << yearly_salary << endl;

	// calculate yearly salary and revised salary
	salary_raise = (10 * employeeA.getMonthlySalary()) / 100;
	revised_salary = (salary_raise + employeeA.getMonthlySalary()) / 12;
	employeeA.setMonthlySalary(revised_salary);

	// print revised monthly salary
	cout << "Employee-A Revised Monthly Salary: " << employeeA.getMonthlySalary() << endl;

	// calculate yearly salary and revised salary
	salary_raise = (10 * employeeB.getMonthlySalary()) / 100;
	revised_salary = (salary_raise + employeeB.getMonthlySalary()) / 12;
	employeeB.setMonthlySalary(revised_salary);

	// print revised monthly salary
	cout << "Employee-B Revised Monthly Salary: " << employeeB.getMonthlySalary() << endl;

}