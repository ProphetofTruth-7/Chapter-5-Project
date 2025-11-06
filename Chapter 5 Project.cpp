// This is the RNG Guesser Subproject

#include <iostream>
#include <random>
using namespace std;

int main()
{
    int lowerValue, upperValue, userGuess;
    int attempts = 0;
    
    cout << "What is the lower value of your guessing range? ";
    cin >> lowerValue;
    cout << "What is the upper value of your guessing range? ";
    cin >> upperValue;


    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<>  dist(lowerValue, upperValue);

    int randomNumber = dist(gen);
    
    cout << "Guess the value! ";
    cin >> userGuess;

    while (userGuess != randomNumber) {
        if (userGuess > randomNumber) {
            cout << "Incorrect! Try guessing lower! ";
            ++attempts;
        }
        if (userGuess < randomNumber) {
            cout << "Incorrect! Try guessing higher! ";
            ++attempts;
        }
        cin >> userGuess;
    }
    cout << "Awesome! You guessed the right number! It took you " << attempts << " tries";

}
