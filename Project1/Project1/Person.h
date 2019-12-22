#pragma once
#include <string>
#include <iostream>
using namespace std;

class Person
{
private:
	string name;
	long id;
	int age;

public:
	Person();
	Person(string, long, int);
	~Person();
	void Print();
};

