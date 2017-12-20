#include "NamePairs.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
Name_pairs np1; 
Name_pairs np2; 

string inString;
double inAge;
char inputVal = 'y';
vector <pair<string,double> > inPairVec;

while( inputVal != 'n')
{
    cout << "Enter Name: "; 
    cin >> inString;
    cout << "Enter Age: ";
    cin >> inAge;
    cout << endl;
    cout << "Still want to input data? y/n" << endl;
    cin >> inputVal;

   //Inserting the data to the inPairVec;
   inPairVec.push_back(make_pair(inString,inAge)); 
   inputVal ='n';	
}
cout << "Reading data from the input..." << endl;
//Inserting into the member vec of the class 
np1.readPair(inPairVec);
np2.readPair(inPairVec);

//printing the vector
cout << "Printing data from the nameAgePairVec... \n";
np1.print();
np2.print();

//Printing from the individual vector
cout << "Printing data from individual vectors... \n";
np1.printFromVec();
np2.printFromVec();

cout << "Sorting the vector of pairs and printing after sorting...\n";
np1.sortPairs();
np1.print();
np2.sortPairs();
np2.print();

cout << "Checking insertation operator" << endl;
cout << np1;
return 0;
}
