#include "FileManager.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    string courseName, instructorName, courseDescription, additionalData;
    char choice;

    cout << "Course Name: ";
    getline(cin, courseName);
    
    cout << "Instructor's Name: ";
    getline(cin, instructorName);
    
    cout << "Course Description (type END to finish):" << endl;
    string temp;
    courseDescription = "";
    while (getline(cin, temp)) {
        if (temp == "END") break;
        courseDescription += temp + "\n";
    }

    // Alocação dinâmica de memória para a descrição
    char *description = new char[courseDescription.length() + 1];
    strcpy(description, courseDescription.c_str());

    string data = "Course: " + courseName + "\nInstructor: " + instructorName + "\nDescription:\n" + description;
    writeToFile(data);
    readFromFile();

    delete[] description;

    cout << "Would you like to add more details? (y/n): ";
    cin >> choice;
    cin.ignore();
    if (choice == 'y' || choice == 'Y') {
        cout << "Enter additional details:" << endl;
        additionalData = "";
        while (getline(cin, temp)) {
            if (temp == "END") break;
            additionalData += temp + "\n";
        }
        appendToFile(additionalData);
        readFromFile();
    }

    return 0;
}
