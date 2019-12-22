#pragma once
#include "Person.h"
class Employee : public Person
{
private:
	float Salary;

public:
	Employee();
	~Employee();
	void Print();
	
	
};

