#include "Header.h"

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    string* fileArray = readFile(pathClasses);
    for (int i = 0; i < stoi(fileArray[0]); i++) {
        showArray(splice(fileArray[i],';'));
    }

    
}

