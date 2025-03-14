#include "FileManager.h"
#include <fstream>
#include <iostream>

void writeToFile(const string& data) {
    ofstream file("course_info.txt");
    file << data;
    file.close();
}

void readFromFile() {
    ifstream file("course_info.txt");
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

void appendToFile(const string& additionalData) {
    ofstream file("course_info.txt", ios::app);
    file << additionalData;
    file.close();
}
