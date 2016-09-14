//
//  Request.hpp
//  FrontlinePatientClass
//
//  Created by Jess  Sickles on 3/29/16.
//  Copyright © 2016 Jess Sickles. All rights reserved.
//

#ifndef Request_hpp
#define Request_hpp

#include <stdio.h>
#include <vector>
#include <iostream>

#endif /* Request_hpp */
#include <string>
using namespace std;
using std::vector;


class Request
{
public:
    Request(string name, string town);
    void readRequest(ifstream ins);
    void writeRequest(ofstream outs);
    
    
    
private:
    //vector containing patients?
    
};