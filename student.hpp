//
//  student.hpp
//  ClassDataSystem2
//
//  Created by XXXG-01W Wing Gundam on 1/22/23.
//
#pragma once
//#ifndef student_hpp
//#define student_hpp
#include <iostream>
#include <iomanip>
#include "degree.hpp"

using std::string;

class Student {
public:
    const static int daysArray = 3;

    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int studentAge;
    int courseDays[daysArray];
    DegreeProgram degreeProgram;
    
    Student (string studentID, string firstName, string lastName, string emailAddress, int studentAge, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
    ~Student();
    
//accessor-getters
    string getID();
    string getFirstName();
    string getLastName();
    string getEmailAddress();
    int getStudentAge();
    int* getCourseDays();
    DegreeProgram getDegreeProgram();
    
 //creates mutator-setters
    void setID(string ID);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmailAddress(string emailAddress);
    void setStudentAge(int studentAge);
    void setCourseDays(int* courseDays);
    void setDegreeProgram(DegreeProgram);

    static void printHeader();
    
    void print();
};

//#endif /* student_hpp */
