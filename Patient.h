#ifndef PATIENT_H
#define PATIENT_H

#include <string>
using namespace std;

class Patient
{
public:

getName();
getTown();
getAge();
getIllness();
getTreatment();

setName(string fn, string ln);
setTown(string place);
setIllness(string ill);
setTreatment(string treats);

readRequest(ifstream ins);
writeRequest(ofstream outs);



private:

string firstName;
string lastName;
string town;
int age;
//vector for illness
//vector for treatment
int illness;
int treatment;

}

//vector<int> v;
//v.push_back(7);

