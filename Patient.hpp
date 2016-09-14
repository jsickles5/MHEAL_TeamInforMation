//
//  Patient.hpp
//  FrontlinePatientClass
//
//  Created by Jess  Sickles on 3/29/16.
//  Copyright © 2016 Jess Sickles. All rights reserved.
//

#ifndef Patient_hpp
#define Patient_hpp

#include <stdio.h>
#include <vector>
#include <iostream>
#include "Treatment.hpp"
#include "Illness.hpp"


#endif /* Patient_hpp */
#include <string>
using namespace std;
using std::vector;

class Patient
{
public:
    
    Patient(string firstName, string lastName, string town, int age, string treatment, string illness, double date);
    string getName();
    string getTown();
    int getAge();
    int getIllness(string ill);
    int getTreatment(string t);
    int getLastTreatment();
    int getLastIllness();
    
    void setName(string fn, string ln);
    void setTown(string place);
    void setIllness(Illness ill);
    void setTreatment(Treatment treats);
    
    void readRequest(ifstream ins);
    void writeRequest(ofstream outs);
    
    
    
private:
    
    string name;
    string town;
    int age;
    vector<Illness> patientIllness;
    vector<Treatment> patientTreatments;
    string illness;
    string treatment;
    string date;
    
};

//vector<int> v;
//v.push_back(7);

