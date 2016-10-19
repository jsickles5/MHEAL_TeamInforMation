// A dummy code that reads in "*name" removes the * and outputs the name to a new line
// in a CSV file

// (c) Maria Roma 2016

#include "Patient.hpp"
#include <algorithm>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {

        // Get the first argument to the executable, remove the first asterisk and replace the rest with commas
        string input = argv[1];
        input = input.substr(1);
        replace(input.begin(), input.end(), '*', ',');

        // Open the csv and print the string to it
        ofstream database;
        database.open("database.csv", fstream::out | fstream::app);
        database << input << endl;

        return 0;
}

// Maria wants to show you what a comment is. Again. This is master.
