// Name : Muhammad Hafizudiin Hakimi Bin Hasmadi
// Matric Number : A25CS0273
// Date : 19 December 2025

#include <iostream>
using namespace std;

void dispStatus (int );
void getInput (int &,int &,int &,int &);
void dispOutput (int );
int calcAverage (int , int );


int main (){
    string state, highestState;
    char choice;
    int activeCases;
    int total,newC,tDeath,tRecovered;

    int numStates = 0;
    int totalActiveCases = 0;
    int highestCases = -1;
    
    
    

    do {
        cout << "\n<<<<<<<<<<<<<< DATA >>>>>>>>>>>>>" << endl;
        cout << "State name     : ";
        getline(cin, state); // clear input buffer
        getInput (total,newC,tDeath,tRecovered);
        activeCases = total + newC - tDeath - tRecovered;

        cout << "<<<<<<<<<<<<< SUMMARY >>>>>>>>>>>" << endl;
        dispOutput(activeCases);

        totalActiveCases += activeCases;
        numStates++;

        if (activeCases > highestCases) {
            highestCases = activeCases;
            highestState = state;
        }

        cout << "\nPress <ENTER> to continue...";
        choice = cin.get();
        cin.ignore(1000, '\n');
        

    }  while (choice != '\n');

    cout << "<<<<<<<<< ACTIVE CASES >>>>>>>>>>" << endl;
    cout << "Total  : " << totalActiveCases << endl;
    cout << "Highest: " << highestCases << " (" << highestState << ")" << endl;
    cout << "Average for " << numStates << " states: " << calcAverage(numStates, totalActiveCases) << endl;
    
    return 0;
}
void dispStatus (int activeCases){
    if (activeCases > 40)
        cout << "Status        : Red zone" << endl;
    else if (activeCases >= 21)
        cout << "Status        : Orange zone" << endl;
    else if (activeCases >= 1)
        cout << "Status        : Yellow zone" << endl;
    else
        cout << "Status        : Green zone" << endl;
        
}

void getInput (int &total,int &newCase,int &death,int &recovered){
    
    cout << "Total cases    : ";
    cin >> total;
    cout << "New cases      : ";
    cin >> newCase;
    cout << "Total death    : ";
    cin >> death;
    cout << "Total recovered: ";
    cin >> recovered;
    
}

void dispOutput (int activeCases){
    
    cout << "Active cases  : "<< activeCases << endl;
    dispStatus (activeCases);
}

int calcAverage(int numStates, int totalActiveCases)
{
    return totalActiveCases / numStates;

}

