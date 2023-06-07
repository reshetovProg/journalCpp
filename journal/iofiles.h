#pragma once


void writeFile(string path, string* array) {
	int size = stoi(array[0]);
	ofstream out(path);
	for (int i = 1; i <= size; i++) {
		out << array[i] << endl;
	}
	out.close();
}

int countLine(string path) {
	ifstream in(path);
	string str;
	int count = 0;
	if (in.is_open()) {
		while (getline(in, str)) {
			count++;
		}
	}
	in.close();
	return count;
}

string* readFile(string path) {
	ifstream in(path);
	string str;
	string* array = new string[countLine(path)+1];
	array[0] = to_string(countLine(path));
	int count = 1;
	if (in.is_open()) {
		while (getline(in, str)) {
			array[count++] = str;
		}
	}
	return array;
}

string* splice(string str, char s) {
	int size = 2;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == s) size++;
	}
	string* array = new string[size];
	array[0] = to_string(size);
	for (int i = 0,k=1; i < str.size(); i++) {
		string buf = "";
		while( str[i] != s && str[i] != '\0') {
			buf += str[i++];
		}
		array[k++] = buf;
	}
	return array;
}

void showArray(string* array) {
	int size = stoi(array[0]);
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}