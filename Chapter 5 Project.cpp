// This is the Population Chart Subproject

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    int year = 1880;
    int asteriskLoopStart = 0;
    int population, asteriskLoopEnd;

    ifstream inFile("People.txt");
    if (!inFile) {
        cout << "File Opening Error!" << endl;
        return 1;
    }





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
