//
//  Treatment.cpp
//  FrontlinePatientClass
//
//  Created by Jess  Sickles on 3/29/16.
//  Copyright © 2016 Jess Sickles. All rights reserved.
//

#include "Treatment.hpp"

Treatment::Treatment(int rep_in, string name_in) {

        name = name_in;

        if (name == "antibiotics") {
                representation = 1;
        }
        if (name == "iv") {
                representation = 2;
        }
        if (name == "feeding tube") {
                representation = 3;
        }
}

int Treatment::getRepresentation() { return representation; }

string Treatment::getName() { return name; }