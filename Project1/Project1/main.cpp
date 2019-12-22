#include "WorkingStudent.h"



int main() {
	int size = 0;
	cout << "please chose size for ARR";
	cin >> size;


	if (size > 1) {
		Person* Arr = new Person[size];
	}
	for (int i = 0; i < size; i++) {
		string name;
		long ID, Age, aver;
		char inst[10];
		float sel;
		bool same;
		cout << "name";
		cin >> name;
		cout << "ID";
		cin >> ID;

		cout << "Age";
		cin >> Age;

		cout << "aver";
		cin >> aver;

		cout << "inst";
		cin >> inst;

		cout << "selery";
		cin >> sel;

		cout << "same inst";
		cin >> same;

		Arr [i] = new WorkingStudent(name, ID, Age, aver, inst, sel);
	
	
	}

	for (int j = 0; j < size; j++) {
		Arr[j].print();
	
	}
	








}