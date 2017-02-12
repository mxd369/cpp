// https://www.programiz.com/cpp-programming/structure
#include <iostream>
using namespace std;
/*

struct Person //structure person is defined
{
	// person has three members: name, age, salary
	char name[50];//	50 bytes
	int age;// 			 4 bytes
	float salary;// 	 4 bytes
	// 58 bytes of memory allocated for structure variable bill
};

Person bill; // define a structure variable


bill.age = 50;//access members of a structure
*/
#include <iostream>
using namespace std;

struct Person
{
	char name[50];
	int age;
	float salary;
};

int main()
{
	Person p1;

	cout << "Enter Full name: ";
	cin.get(p1.name, 50);
	cout << "Enter age: ";
	cin >> p1.age;
	cout << "Enter salary: ";
	cin >> p1.salary;

	cout << "\nDisplaying Information." << endl;
	cout << "Name: " << p1.name << endl;
	cout << "Age: " << p1.age << endl;
	cout << "Salary: " << p1.salary << endl;

	return 0;
}