//
//  Illness.hpp
//  FrontlinePatientClass
//
//  Created by Jess  Sickles on 3/29/16.
//  Copyright © 2016 Jess Sickles. All rights reserved.
//

#ifndef Illness_hpp
#define Illness_hpp

#include <stdio.h>
#include <vector>
#include <iostream>

#endif /* Illness_hpp */
using namespace std;
using std::vector;

class Illness
{

public:
    Illness(string name_in, int timesTreatedFor_in);
    void readIllness(ifstream ins);
    void writeIllness(ofstream outs);
    int getRepresentation();
    string getName();
    
private:
    string name;
    int timesTreatedFor;
    int representation;
    
    
    
};