/** Program Objective : Create a variable of struct type. create a pointer and point to it 
and use the pointer to take the input and output.
*/

#include <iostream>
#include <string>
using namespace std;

struct person{
	string name;
	int age;
	double salary;
};

int main()
{
	person p1;

	cout << "Enter the person details as name, age and salary" << endl;
	cin >> p1.name;
	cin >> p1.age;
	cin >> p1.salary;
	 
	cout << "Details of person as follows: " << endl;
	cout << "name: " << p1.name <<endl;
	cout << "age:  " << p1.age << endl;
	cout << "salary: " << p1.salary << endl;

	person *ptr = &p1;

	cin >> ptr->name;
	cin >> ptr->age;
	cin >> ptr->salary;

	cout << "Details of person as follows: " << endl;
	cout << "name: " << ptr->name << endl;
	cout << "age:  " << ptr->age << endl;
	cout << "salary: " << ptr->salary << endl;



	return 0;
}