//
//  main.cpp
//  ClassDataSystem2
//
//  Created by XXXG-01W Wing Gundam on 1/22/23.
//

#include <iostream>

#include <string>
#include <stdio.h>
#include "roster.hpp"
#include "student.hpp"

using namespace std;

void printAllFunctions() {
    cout << "Hywel Francis" << endl;
    cout << "Student ID ID#010547317" << endl;
    cout << "c867 - Scripting & Programming Applications " << endl;
    cout << "   - Written in C++ with headers in c(.h) -   " << endl << endl;
    
    //testRoster.add
    //testRoster.printAll
    //
    Roster testRoster;
        testRoster.add("StudentID ", "  Appa  ", "  Francis  ", "test@mail.com",28,30,32,32,DegreeProgram::SECURITY);
    testRoster.printAll();
}

int main() {
    cout << "Preparer: " << endl;
    printAllFunctions();
    
    const string studentData[] = {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Hywel,Francis,hfran93@wgu.edu,36,7,18,20,SOFTWARE"};
    
    int classSize = 5;
    
    Roster classRoster; // 2. create instance of Roster class called classRoster
    
    for (int i = 0; i < classSize; i++){
        classRoster.parse(studentData[i]);
    }
    
    //creates test roster
    
    
    
    //pass each line A1 thru A5 into roster
    /*
    cout << "Roster: "; cout << endl;
    
    classRoster.printAll(); cout << endl;
    
    classRoster.printInvalidEmails(); cout << endl;
    
    cout << "Average days in each of three courses, per student: " << endl;
    for (int i = 0; i < classSize; i ++){
        classRoster.printAverageDaysInCourse(classRoster.getStudent()[i]->getID());
    }
    cout << endl;
    
    cout << "Software Degree: " << endl;
    classRoster.printByDegreeProgram(DegreeProgram::SOFTWARE);
    cout << endl;
    
    cout << "Removing student A3" << endl;
    classRoster.removeStudent("A3");
    cout << endl;
    
    cout << "All students: " << endl;
    classRoster.printAll();
    cout << endl;
    classRoster.removeStudent("A3");
    
     */
     
    return 0;
}
    
    

//create new student passing data in
//adding new student to roster is last step
//class roster aray holds 5 student objects. converting each string data to data-object in memory. use accessors/mutators. transform these 5 strings into 5 data object in program that sit in class roster array. 
//JUST BUILDING DATA OBJECT. roster parse: break string down, then create student, then add to roster.
//separate add method which adds to roster. roster starts out with all entries as null. each time you add one, you have to advance the index so next time it goes into the next open slot. 

//how do i call a function that outputs students that match degree?
//how do i call a function that outputs the contents of new Roster object?



