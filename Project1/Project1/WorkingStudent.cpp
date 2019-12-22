#include "WorkingStudent.h"





WorkingStudent::WorkingStudent()
{
}

WorkingStudent::WorkingStudent(bool same_institute):same_institute(same_institute)
{
}

WorkingStudent::~WorkingStudent()
{
}

void WorkingStudent::print()
{
	Student::Print();
	Employee::Print();
	if (same_institute) {
		cout << "same institute" << endl;
		return;
	}
	cout << "not same institute" << endl;
}
