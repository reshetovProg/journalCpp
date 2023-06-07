#include "Student.h"

Student::Student(string str) {
	string* array = splice(str,';');
	id = stoi(array[1]);
	name = array[2];
}

void Student::show()
{
}
