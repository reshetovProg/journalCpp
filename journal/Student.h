#pragma once
//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//#include "iofiles.h"

#include "Header.h"

class Student {
private:
	int id;
	string name;
	int* mark1 = nullptr;
	int* mark2 = nullptr;
	int* mark3 = nullptr;
	int* mark4 = nullptr;
	int resultMArks[4];
	int resultYear;
public:
	Student(string str);
	void show();
};