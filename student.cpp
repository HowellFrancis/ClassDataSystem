//
//  student.cpp
//  ClassDataSystem2
//
//  Created by XXXG-01W Wing Gundam on 1/22/23.
//

#include "student.hpp"
#include "degree.hpp"
using namespace std;

//establish default constructor, populate
Student::Student(string studentID, string firstName, string lastName, string emailAddress, int studentAge, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeType) {
    
    
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->studentAge = studentAge;
    this->courseDays[0] = daysInCourse1;
    this->courseDays[1] = daysInCourse2;
    this->courseDays[2] = daysInCourse3;
    this->degreeProgram = degreeType;
}

//establishes constructor
Student::~Student(){}

//accessors
string Student::getID() {
    return this->studentID;
}
string Student::getFirstName() {
    return this->firstName;
}
string Student::getLastName(){
    return this->lastName;
}
string Student::getEmailAddress(){
    return this->emailAddress;
}
int Student::getStudentAge(){
    return this->studentAge;
}
int* Student::getCourseDays(){
    return this->courseDays;
}
DegreeProgram Student::getDegreeProgram(){
    return this->degreeProgram;
}

//setters
void Student::setID(string studentID) {
    this->studentID = studentID;
}
void Student::setFirstName(string firstName) {
    this->firstName = firstName;
}
void Student::setLastName(string lastName) {
    this->lastName = lastName;
}
void Student::setEmailAddress(string emailAddress) {
    this->emailAddress = emailAddress;
}
void Student::setStudentAge(int studentAge) {
    this->studentAge = studentAge;
}
void Student::setCourseDays(int courseDays[]) {
    this->courseDays[0] = courseDays[0];
    this->courseDays[1] = courseDays[1];
    this->courseDays[2] = courseDays[2];
}
void Student::setDegreeProgram(DegreeProgram DEGREE) {
    this->degreeProgram = DEGREE;
}
void Student::printHeader() {
    cout << "Student ID | First Name | Last Name | Email Address | Age | Days to Course Completion | Degree Program\n";
}
void Student::print() {
    cout << this->getID();
    cout << this->getFirstName();
    cout << this->getLastName();
    cout << this->getEmailAddress();
    cout << this->getStudentAge();
    cout << this->getCourseDays() [0];
    cout << this->getCourseDays() [1];
    cout << this->getCourseDays() [2];
    cout << degreeProgramsString[this->getDegreeProgram()];
}
