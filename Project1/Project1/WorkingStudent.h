#pragma once
#include "Student.h"
#include "Employee.h"
class WorkingStudent :
	public Student, public Employee
{
private:
	bool same_institute;




public:
	WorkingStudent();
	WorkingStudent(bool);
	~WorkingStudent();

	void print();
};

