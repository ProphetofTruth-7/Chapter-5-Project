// This is the Population Chart Subproject

#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int year = 1880;
    int asteriskLoopStart = 0;
    int population, asteriskLoopEnd;
    string townName;

    ifstream inFile("People.txt");
    if (!inFile) {
        cout << "File Opening Error!" << endl;
        return 1;
    }


    cout << "What is the name of this town? ";
    cin >> townName;

    cout << "\n" << townName << " Population Graph from 1900-2000(each * is 1000 people)\n \n";
    while (inFile >> population) {
        asteriskLoopEnd = population / 1000;
        year += 20;
        cout << year << "  ";
        do {
            cout << "*";
            ++asteriskLoopStart;
        } while (asteriskLoopStart != asteriskLoopEnd);
        cout << "\n";
        asteriskLoopStart = 0;
    }
}
