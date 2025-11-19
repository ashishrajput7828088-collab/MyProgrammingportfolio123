#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));               // Seed random generator
    int secret = rand() % 100 + 1;  // Random number 1–100
    int guess;

    cout << "Guess the number (1 to 100):\n";

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess < secret) {
            cout << "Too low! Try again.\n";
        }
        else if (guess > secret) {
            cout << "Too high! Try again.\n";
        }
        else {
            cout << "Correct! You guessed the number!\n";
            break;
        }
    }

    return 0;
}
