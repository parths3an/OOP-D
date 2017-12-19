#ifndef NAME_PAIRS_H
#define NAME_PAIRS_H

#include <vector>
#include <string>

using namespace std;
class Name_pairs
{
public:

//Constructor
Name_pairs();

void readPair(vector<pair<string,double> > &inPairVec);

//Print using both individual vectors
void printFromVec();

//Using Pair DS of the class 
void print();

//Sorting the pairs alphabetically 
void sortPairs();

private:
vector< pair<string,double> >  nameAgePairVec;
vector <double> ageVec;
vector <string> nameVec;
};

#endif 
