#include "Person.h"



Person::Person()
{
}

Person::Person(string name, long id, int age):name(name),id(id),age(age)
{
}


Person::~Person()
{
}

void Person::Print()
{
	cout << "Name:" << name << endl;
	cout << "ID:" << id << endl;
	cout << "Age:" << age << endl;
}
