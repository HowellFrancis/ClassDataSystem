//
//  degree.h
//  Class Data System
//
//  Created by Hywel Francis on 1/14/23.
//
//C.Define enumerated data type DegreeProgram for the degree programs containing the data type values SECURITY, NETWORK, and SOFTWARE.
#ifndef degree_h
#define degree_h

#include <stdio.h>

#endif /* degree_h */

#pragma once
enum DegreeType {
    SECURITY=0,
    NETWORK=1,
    SOFTWARE=2,
    notSpecified = 3,
};

static const std::string degreeTypeString[3] = { "SECURITY", "NETWORK", "SOFTWARE" };

        
    
