// A dummy code that reads in "*name" removes the * and outputs the name to a new line
// in a CSV file

// (c) Maria Roma 2016
// this isn't a real copyright and everyone knows it
#include <iostream> 
#include <fstream>
#include <vector>
#include <string> 
#include <cstdlib>
#include "Patient.hpp"
using namespace std; 

int main() {

	string name;
	cout << "Enter *firstname*lastname: "; 
	cin >> name;

	int x, y, z;

	x = name.find("*");
	name.erase(x,1);
	y = name.find("*");

	firstName = name.substr((x+1), (y-x));

	name.erase(y,1);

	z = name.find("x");

	lasName = name.substr((y+1), (z-y));

	ofstream database;
	database.open("names.csv"); 

	database << name << endl;

	return 0; }

<<<<<<< HEAD
	// Maria wants to show you what a comment is. Again. And here's another.
=======
	// Maria wants to show you what a comment is. Again. This is master.
>>>>>>> master
	