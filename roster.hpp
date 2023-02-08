//
//  roster.hpp
//  ClassDataSystem2
//
//  Created by XXXG-01W Wing Gundam on 1/22/23.
//h file is for declarations; 
#pragma once
#include "student.hpp"
#include <iomanip>
#include <stdio.h>
#define roster_hpp

using namespace std;
using std::cout;
using std::endl;
using std::string;

class Roster { //create Roster class
public:
    Roster(); //empty constructor initializes all fields to default values
    
    Student** getStudent();//method definition, not written!
    
    void parse(string studentData); //studentData added to classRoster as object
    
    void add(string studentID, //E.3.a. Public void add
             string firstName,
             string lastName,
             string emailAddress,
             int age,
             int daysInCourse1,
             int daysInCourse2,
             int daysInCourse3,
             DegreeProgram DEGREE);
    
    void remove(string studentID); //E.3.b. isolates student using Student ID #
    void printAll();//E.3.c. prints all data from each student
    void printAverageDaysInCourse(string studentID);//E.3.d. prints average number of days in three courses
    void printInvalidEmails(); //E.3.e. prints invalid email addresses, if any
    void printByDegreeProgram(DegreeProgram);//E.3.f. prints student information for specified degree type
    void removeStudent(string studentID); //
    int classSize = 0; //establish class Roster size
    Student* classRosterArray[5]; //1. Create an array of pointers, classRosterArray, to hold the data privided in studentData Table.
    
    //?????????private functions?
    
    ~Roster(); //destructor, releases memory
};
