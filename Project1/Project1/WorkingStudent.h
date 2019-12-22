#pragma once
#include "Student.h"
#include "Employee.h"
class WorkingStudent :
	public Student, public Employee
{
public:
	WorkingStudent();
	~WorkingStudent();
};

