#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int randomNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "==================================" << endl;
    cout << "      NUMBER GUESSING GAME        " << endl;
    cout << "==================================" << endl;
    cout << "Guess a number between 1 and 100" << endl;

    do {
        cout << "\nEnter your guess: ";
        cin >> guess;

        attempts++;

        if (guess > randomNumber) {
            cout << "Too High! Try again." << endl;
        }
        else if (guess < randomNumber) {
            cout << "Too Low! Try again." << endl;
        }
        else {
            cout << "\nCongratulations! You guessed correctly!" << endl;
            cout << "Number of attempts: " << attempts << endl;
        }

    } while (guess != randomNumber);

    return 0;
}
