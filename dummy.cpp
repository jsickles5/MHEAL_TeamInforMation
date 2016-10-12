// A dummy code that reads in "*name" removes the * and outputs the name to a new line
// in a CSV file

// (c) Maria Roma 2016

#include "Patient.hpp"
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {

        string name, lastName, firstName;
        int x;

        // This will read the first argument to the executable
        name = argv[1];

        x = name.find("*", 1);

        firstName = name.substr(1, x - 1);
        lastName = name.substr(x + 1);

        ofstream database;
        database.open("names.csv");

        database << firstName << "," << lastName << endl;

        return 0;
}

// Maria wants to show you what a comment is. Again. This is master.
