//
//  main.cpp
//  Class Data System
//
//  Created by Hywel Francis on 1/14/23.
//*C++ CLI app that converts an array of strings found in a table of student data to an array of acessible student objects.*/

#include <string>
#include <iostream>
#include <sstream>
#include "degree.h"
#include "roster.hpp"

using namespace std;
//personal information
void printPersonalInfo() {
    cout << "Hywel (Howell) Francis --- ID#010547317" << endl;
    cout << "c867 - Scripting & Programming Applications " << endl;
    cout << "   - cpp language with headers in c(.h) -   " << endl << endl;
}

int main () {
    //outputs personal information
    cout << "Preparer: " <<endl;
    printPersonalInfo();
    
    
    //studentDataTable input
    //A.Modify the “studentData Table” to include your personal information as the last item
    string studentData[5] =
    { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Hywel,Francis,hfran93@wgu.edu,36,7,18,20,SOFTWARE"};
    
    // int age; int daysCourse1; int daysCourse2; int daysCourse3; string studentID; string firstName; string lastName; string email;
    
    string stringArray[9];
    string cell;
    
    for (int index = 0; index < 5; index++) {
        int index2 = 0;
        string lineString = studentData[index];
        istringstream ss(lineString);
        
        while (getline(ss, cell, ',')) {
            stringArray[index2] = cell;
            index2++;
        }
    }
    
    
    // Roster classRoster;
    
   // classRoster.add(stringArray[0]. stringArray[1], stringArray[2], stringArray[3], stringArray[4], stringArray[5], std::stoi(stringArray[6]), std::stoi(stringArray[7]), degreeType);
    
}
