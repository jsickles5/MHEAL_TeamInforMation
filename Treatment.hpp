//
//  Treatment.hpp
//  FrontlinePatientClass
//
//  Created by Jess  Sickles on 3/29/16.
//  Copyright © 2016 Jess Sickles. All rights reserved.
//

#ifndef Treatment_hpp
#define Treatment_hpp

#include <stdio.h>
#include <string>
using namespace std;

#endif /* Treatment_hpp */

class Treatment {
      public:
        Treatment(int rep_in, string name_in);
        int getRepresentation();
        string getName();

      private:
        int representation;
        string name;
};