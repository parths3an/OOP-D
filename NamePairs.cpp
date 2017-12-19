#include <iostream>
#include "NamePairs.h"
#include <vector>
using namespace std;

Name_pairs::Name_pairs()
{
//Nothing to do
}

void Name_pairs::readPair(vector<pair<string, double> > &inPairVec)
{
    for (auto a : inPairVec)
    {
        string tempName = a.first;
        double tempAge = a.second;

        ageVec.push_back(tempAge);
        nameVec.push_back(tempName);

        nameAgePairVec.push_back(make_pair(tempName,tempAge));
    }
}

void Name_pairs::print()
{
    for(auto a : nameAgePairVec )
    {
        cout << a.first << " " << a.second << endl; 
    }
}

void Name_pairs::printFromVec()
{
    for (int i =0; i < nameVec.size(); i++)
    {
        cout << nameVec[i] << " " << ageVec[i] << endl;
    }
}

void Name_pairs::sortPairs()
{
  std::sort(nameAgePairVec.begin(), nameAgePairVec.end());    
}
