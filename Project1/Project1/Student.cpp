#include "Student.h"



Student::Student(int average,string intetute ):average(average),instetute(instetute)
{
	for (int i = 0; i < 10; i++)
		cin >> instetute[i];


}


Student::~Student()
{
}

void Student::Print()
{
	Person::Print();
	cout << "the average is:"<<average<<endl;
	cout << "Intetute:";
		for (int i = 0; i < 10; i++)
			cout << instetute[i];
		cout << "\n";
}
