#include "Employee.h"



Employee::Employee()
{
	cout << "Enter the salary of the employed person" << endl;
	cin >> Salary; 
}


Employee::~Employee()
{
}

void Employee::Print()
{
	Person::Print();
	cout << "The salary of the Employee is : " << Salary << endl;

}
