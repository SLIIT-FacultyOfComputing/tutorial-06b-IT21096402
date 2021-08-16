#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int SID, const char SName[]) {
  StudentId = SID;
  strcpy(Name, SName);
}

// Display StudentId and Name
void Student::display() {
  cout << "Student ID: " << StudentId << endl;
  cout << "Student name: " << Name << endl;
}
