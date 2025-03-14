#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <string>
using namespace std;

void writeToFile(const string& data);
void readFromFile();
void appendToFile(const string& additionalData);

#endif
