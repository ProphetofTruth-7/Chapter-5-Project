// This is the Population Subproject

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int population, examinationLength;
    double growthRate;
    int dayCounter = 0;

    do {
        cout << "What is the initial population of this creature(as an integer more than 1)?" << endl;
        cin >> population;
    } while (population <= 1);

    do {
        cout << "What is the growth rate of this creature(as a postive decimal percentage)?" << endl;
        cin >> growthRate;
    } while (growthRate < -1);

    do {
        cout << "How long will this examination last in days(as an integer more than 0)?" << endl;
        cin >> examinationLength;
    } while (examinationLength < 1);

    do {
        if (dayCounter == 0) {
            population = population;
        } else {
            population += (population * growthRate);
        }
        cout << "As of Day " << dayCounter << ", the population is " << population << "\n" << endl;
        ++dayCounter;
    } while (dayCounter != examinationLength + 1);

}
