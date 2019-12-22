#pragma once
#include "Person.h"
#include <iostream>
#include <string>
using namespace std;
class Student :public Person
{
private:
	int average;
	char instetute[10];
public:
	Student(int,string);
	~Student();
	void Print();
};

