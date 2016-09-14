//
//  Patient.cpp
//  FrontlinePatientClass
//
//  Created by Jess  Sickles on 3/29/16.
//  Copyright © 2016 Jess Sickles. All rights reserved.
//

#include "Patient.hpp"

#include <stdio.h>
#include <vector>
#include <iostream>
#include "Treatment.hpp"
#include "Illness.hpp"
#include <sstream>


#include <string>
using namespace std;
using std::vector;

Patient::Patient(string firstName, string lastName, string twn, int ag, string treat, string ill, double date)
{
    name = firstName + " " + lastName;
    town = twn;
    age = ag;
    treatment = treat;
    illness = ill;
    //date
    
}

string Patient::getName()
{
    return name;
}

string Patient::getTown()
{
    return town;
}

int Patient::getAge()
{
    return age;
}

int Patient::getIllness(string ill)
{
    for(int i =0; i< patientIllness.size(); i++)
    {
        if(patientIllness.at(i).getName() == ill)
        {
            return patientIllness.at(i).getRepresentation();
        }
    }
    
    return -1;
        
}


 int Patient::getTreatment(string t)
    {
        //same as get illness
        
        for(int i =0; i< patientTreatments.size(); i++)
        {
            if(patientTreatments.at(i).getName() == t)
            {
                return patientIllness.at(i).getRepresentation();
            }
        }
        
        return -1;
                     
    }



int Patient::getLastIllness()
    {
        
        return patientIllness.back().getRepresentation();
    }

int Patient::getLastTreatment()
    {
        // same as above
        return patientTreatments.back().getRepresentation();
                     
    }
                 
void Patient::setName(string fn, string ln)
    {
        name = fn + ln;
    }
                 
void Patient::setTown(string town_in)
    {
        town = town_in;
    }
                 
void Patient::setIllness(Illness ill)
    {
        patientIllness.push_back(ill);
    }

void Patient::setTreatment(Treatment treats)
    {
        patientTreatments.push_back(treats);
    }

/*void Patient::readRequest(ifstream ins)
    {
        char star;
        ins >> star >> star >> star >> name  >> star >>  town >> star >> age >> star >> treatment >> star >> illness >> star >> date;
        
    }
                
void Patient::writeRequest(ofstream outs)
    {
                     
    }
                 
      */

                 
                 
                 
                 
                 
                 
                 
                 
                 


