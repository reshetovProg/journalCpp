#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;

#include "iofiles.h"
#include "Student.h"
class Student;
class Book;


void writeFile(string path, string* array);
/* 0-й элемент - размер массива*/
string* readFile(string path);
string* splice(string str, char s);
void showArray(string* array);
string pathClasses = "./classes.txt";


