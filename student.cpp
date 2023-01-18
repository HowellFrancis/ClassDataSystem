//
//  student.cpp
//  Class Data System
//  Created by Hywel Francis on 1/14/23.
//
#include <iostream>
#include <string>
//#include <stdio.h>
#include "student.h"
using namespace std;

//establishes constructor for class Student objects
Student::Student(){
}

//D.2.a. accessor-getters
string Student::getStudentID() const {
    return this->studentID;
}
string Student::getFirstName() const {
    return this->firstName;
}
string Student::getLastName() const {
    return this->lastName;
}
string Student::getEmail() const {
    return this->email;
}
int Student::getAge() const {
    return this->age;
}
int *Student::getDays() {
    return this->days;
}
DegreeType Student::getDegreeType() {
    return this->degreeType;
}

//D.2.b. mutator-setters
void Student::setStudentID(string studentID) {
    this->studentID = studentID;
}
void Student::setFirstName(string firstName) {
    this->firstName = firstName;
}
void Student::setLastName(string lastName) {
    this->lastName = lastName;
}
void Student::setEmail(string email) {
    this->email = email;
}
void Student::setAge(int age) {
    this->age = age;
}

void Student::setCourseDayArray(int days[])
{
    for (int i = 0; i < daysArray; i++)
    this->days[i] = days[i];
}
void Student::setDegreeType(DegreeType dp) {this->degreeType = dp;

}

//D.2.e. organizes print function
void Student::printStudentData(){
    cout << "Student ID - First Name - Last Name - Email Address - Age - Days to Complete Three Courses - Degree Type\n";
}
void Student::print() {
    cout << this->getStudentID();
    cout << this->getFirstName();
    cout << this->getLastName();
    cout << this->getEmail();
    cout << this->getAge();
    cout << this->getDays()[0];
    cout << this->getDays()[1];
    cout << this->getDays()[2];
    cout << degreeTypeString[this->getDegreeType()];
}
