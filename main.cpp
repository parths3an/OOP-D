#include "NamePairs.h"
#include <iostream>

using namespace std;

int main()
{
Name_pairs np1; 

string inString;
double inAge;
char inputVal = 'y';
vector <pair<string,double> > inPairVec;

while( inputVal != 'n')
{
    cout << "Enter Name: "; 
    cin >> inString;
    cout << endl << "Enter Age: ";
    cin >> inAge;
    cout << endl;
    cout << "Still want to input data? y/n" << endl;
    cin >> inputVal;

   //Inserting the data to the inPairVec;
   inPairVec.push_back(make_pair(inString,inAge)); 
}
cout << "Reading data from the input..." << endl;
//Inserting into the member vec of the class 
np1.readPair(inPairVec);

//printing the vector
cout << "Printing data from the nameAgePairVec... \n";
np1.print();

//Printing from the individual vector
cout << "Printing data from individual vectors... \n";
np1.printFromVec();

return 0;
}