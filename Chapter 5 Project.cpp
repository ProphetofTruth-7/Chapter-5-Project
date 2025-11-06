// This is the Lineup Subproejct

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string lineUp = "LineUp.txt";
    int classSize = 0;
    string first, last;
    
    ifstream inFile(lineUp);

    if (!inFile) {
        cout << "File Error!" << endl;
        return 1;
    }

    string line;

    getline(inFile, line);
        first = line;
        last = line;
        ++classSize;

    while (getline(inFile, line)) {
        if (line < first) {
            first.replace(0, 10, line);
        }
        if (line > last)  {
            last.replace(0, 10, line);
        }
        ++classSize;
    }

    cout << "The first in line is " << first << "\n";
    cout << "The last in line is " << last << "\n";
    cout << "This class includes " << classSize << " student(s)" << endl;

    inFile.close();
    return 0;
}
