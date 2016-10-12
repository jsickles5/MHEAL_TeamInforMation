//
//  Illness.cpp
//  FrontlinePatientClass
//
//  Created by Jess  Sickles on 3/29/16.
//  Copyright © 2016 Jess Sickles. All rights reserved.
//

#include "Illness.hpp"

Illness::Illness(string name_in, int timesTreatedFor_in) {

        name = name_in;
        timesTreatedFor = timesTreatedFor_in;

        if (name == "flu") {
                representation = 1;
        }
        if (name == "malaria") {
                representation = 2;
        }
        if (name == "diabetes") {
                representation = 3;
        }
}

int Illness::getRepresentation() { return representation; }

string Illness::getName() { return name; }