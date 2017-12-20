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

bool myComparison(pair<string,double> i,pair<string,double> j)
{

  return (i.first > j.first);
}

//Operator overloading, insertation operator
ostream& operator<<(ostream& os, const Name_pairs& npObj)
{
    string literals = " ";
    string newLine= "\n";
    
     for(auto a : npObj.nameAgePairVec )
    {
     double val = a.second;
     os << a.first << literals << to_string(val) << newLine;
    }
    return os;
}



private:
vector< pair<string,double> >  nameAgePairVec;
vector <double> ageVec;
vector <string> nameVec;


};

#endif 
