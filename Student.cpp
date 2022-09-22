#include "Student.h"
#include <iostream>
using namespace std;
// Assign studentId and name
Student::assignDetails(int id, char stdname[20]) {
  studentID = id;
  strcpy_s(name,stdname)
}

// Display StudentId and Name
Student::display() {

 cout<< "Student Id :"<< studentID <<endl;;
 cout<< "Student name: "<< name <<endl;

}
