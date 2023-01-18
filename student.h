//
//  student.h
//  Class Data System
//  Created by Hywel Francis on 1/14/23.
//
#pragma once
#include <iostream>
#include <iomanip>
#include <string>
//#ifndef student_h
#define student_h
#include <stdio.h>
#include "degree.h"
using std::string;
using std::cout;
//#endif /* student_h */

//D.1. creates class Student
class Student {
    
//D.1. creates array, number days to complete each course
    const static int daysArray = 3;
    
private:
    string studentID;
    string firstName;
    string lastName;
    string email;
    
    int age;
    int days[daysArray];
    
    DegreeType degreeType;
    
public:
//D.2.a. creates accessor-getters for each instance variable
    string getStudentID() const;
    string getFirstName() const;
    string getLastName() const;
    string getEmail() const;
    int getAge() const;
    int *getDays();
    DegreeType getDegreeType();
    
//D.2.b. creates mutator-setters for each instance variable
    void setStudentID(string studentID);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmail(string email);
    void setAge(int age);
    void setCourseDayArray(int days[]);
    void setDegreeType(DegreeType dt);;
    
//D.2.d. fills constructor using all input parameters
    Student();
    Student(string studentID, string firstName, string lastName, string email, int age, int* daysArray, DegreeType degreeType);
    
    
//D.2.e. creates print function for student data
    static void printStudentData();
    void print();
    
//F.5. creates destructor
    ~Student();
};



