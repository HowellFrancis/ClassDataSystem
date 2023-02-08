//
//  roster.cpp
//  ClassDataSystem2
//
//  Created by XXXG-01W Wing Gundam on 1/22/23.
//
#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>
#include "roster.hpp"
#include "student.hpp"
using namespace std;

Roster::Roster(){ //empty constructor
    this->classSize = 0;
    cout << "roster created!" << endl;
}

void Roster::add(string studentID,
                 string firstName,
                 string lastName,
                 string emailAddress,
                 int age,
                 int daysInCourse1,
                 int daysInCourse2,
                 int daysInCourse3,
                 DegreeProgram DEGREE) {
    
    //IDC123 array instance; -attribute of student object; change DIC 123 lines38-40 change to array, which will be part of student object (passing the data through)
    
    
    classRosterArray[classSize++] = new Student(studentID,
                                                firstName,
                                                lastName,
                                                emailAddress,
                                                age,
                                                daysInCourse1,
                                                daysInCourse2,
                                                daysInCourse3,
                                                DEGREE);;
}

//how do i confirm this is functioning?
//incompatible conversion?
/*
void Roster::remove(string studentID) {
    bool any = false;
    for (int i = 0; i <= Roster::classSize; i++)
    {
        if (classRosterArray[i]->getID() == studentID) {
            any = true;
            if (i < classSize - 1) {
                Student* x = classRosterArray[i];
                classRosterArray[i] = classRosterArray[classSize - 1];
                classRosterArray[classSize - 1] = nullptr;
            }
            Roster::classSize--;
        }
    }
    
    
    if (any) {
        cout << studentID << " REMOVED." << std::endl;
    }
    else cout << studentID << "DOES NOT EXIST." << std::endl;
}
*/

void Roster::parse(string studentData) {
    long long int rhs = studentData.find(",");
    string studentID = studentData.substr(0, rhs); //start at studentID, finds comma
    
    long long int lhs = rhs + 1;
    rhs = studentData.find(",", lhs);
    string firstName = studentData.substr(lhs, rhs - lhs); //firstName
    
    lhs = rhs + 1;
    rhs = studentData.find(",", lhs);
    string lastName = studentData.substr(lhs, rhs - lhs); // lastName
    
    lhs = rhs + 1;
    rhs = studentData.find(",", lhs);
    string emailAddress = studentData.substr(lhs, rhs - lhs); // email
    
    lhs = rhs + 1;
    rhs = studentData.find(",", lhs);
    int age = stoi(studentData.substr(lhs, rhs - lhs)); // convert string to integer
    
    lhs = rhs + 1;
    rhs = studentData.find(",", lhs);
    int daysInCourse1 = stoi(studentData.substr(lhs, rhs - lhs)); // daysInCourse1
    
    lhs = rhs + 1;
    rhs = studentData.find(",", lhs);
    int daysInCourse2 = stoi(studentData.substr(lhs, rhs - lhs)); // daysInCourse2
    
    lhs = rhs + 1;
    rhs = studentData.find(",", lhs);
    int daysInCourse3 = stoi(studentData.substr(lhs, rhs - lhs)); // daysInCourse3
    
    lhs = rhs + 1;
    rhs = studentData.find(",", lhs);
    string degreeType = studentData.substr(lhs, rhs - lhs);
    
    DegreeProgram degreeProgram = SECURITY;
    if (degreeProgramsString[DegreeProgram::NETWORK] == "NETWORK") {
        degreeProgram = NETWORK;
    }
    
    if (degreeProgramsString[DegreeProgram::SOFTWARE] == "SOFTWARE") {
        degreeProgram = SOFTWARE;
    }
    
    add(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
}

/* why is undeclared? how do i run this to confirm functionality?*/
void Roster::printAverageDaysInCourse(string studentID) {
    for (int i = 0; i <= Roster::classSize; i++)
        if (classRosterArray[i]->getID() == studentID) {
            cout << classRosterArray[i]->getID() << ": ";
            cout << classRosterArray[i]->getCourseDays()[0]
            + classRosterArray[i]->getCourseDays()[1]
            + classRosterArray[i]->getCourseDays()[2]/3.0 << endl;
        }
}

void Roster::printByDegreeProgram(DegreeProgram degreeprogram) {
    Student::printHeader();
    for (int i = 0; i <= Roster::classSize; i++) {
        if (Roster::classRosterArray[i]->getDegreeProgram() == degreeprogram) classRosterArray[i]->print();
    }
}

void Roster::printAll() {
    Student::printHeader();
    for (int i = 0; i <= classSize; i++) {
        
        cout << classRosterArray[i]->getID(); cout << '\t';
        if (classRosterArray[i]->getFirstName().size() > 6) {
            cout << classRosterArray[i]->getFirstName(); cout << '\t';
        }
        else {
            cout << classRosterArray[i]->getFirstName(); cout << '\t' << '\t';
        }
        if (classRosterArray[i]->getLastName().size() > 6) {
            cout << classRosterArray[i]->getLastName(); cout << '\t';
        }
        else {
            cout << classRosterArray[i]->getLastName(); cout << '\t' << '\t';
        }
        if (classRosterArray[i]->getEmailAddress().size() > 5) {
            cout << classRosterArray[i]->getEmailAddress(); cout << '\t';
        }
        else {
            cout << classRosterArray[i]->getEmailAddress(); cout << '\t' << '\t';
        }
        cout << classRosterArray[i]->getStudentAge(); cout << '\t';
        cout << classRosterArray[i]->getCourseDays()[0]; cout <<',';
        cout << classRosterArray[i]->getCourseDays()[1]; cout << ',';
        cout << classRosterArray[i]->getCourseDays()[2]; cout << '\t';
        cout << degreeProgramsString[classRosterArray[i]->getDegreeProgram()]
        << endl;
        
    }
    
}

Roster::~Roster(){ //destructor
    //necessary?
//    cout << "Deleting student from roster" << endl << endl;
//    for (int i = 0; i <classSize; i++) {
//        cout << "Deleting student #" << i + 1 << endl;
//        delete classRosterArray[i];
//        classRosterArray[i] = nullptr;
//    }//destructor
}
