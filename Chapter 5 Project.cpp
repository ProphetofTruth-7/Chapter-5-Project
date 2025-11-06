// This is the Pattern Subproject

#include <iostream>
using namespace std;

int main()
{
	int levelCounter = 1;
	int plusCounter = 0;
	do {
		while (plusCounter != levelCounter) {
			++plusCounter;
			cout << "+";
		}
		cout << "\n" << endl;
		++levelCounter;
		plusCounter = 0;
	} while (levelCounter != 11);

	cout << "\n" << endl;
	levelCounter = 1;
	plusCounter = 11;

	do {
		while (plusCounter != levelCounter) {
			cout << "+";
			--plusCounter;
		}
		cout << "\n" << endl;
		++levelCounter;
		plusCounter = 11;
	} while (levelCounter != 11);
}
