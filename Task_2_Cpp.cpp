#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int secret_number, user_guess, attempts = 0;

    // Initialize random number generator
    srand(static_cast<unsigned int>(time(0)));
    secret_number = rand() % 100 + 1; // Generate number between 1-100

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I've selected a number between 1 and 100.\n";

    do {
        cout << "Enter your guess: ";
        cin >> user_guess;
        attempts++;

        if (user_guess < secret_number) {
            cout << "Too low! Try again.\n";
        } else if (user_guess > secret_number) {
            cout << "Too high! Try again.\n";
        } else {
            cout << "Congratulations! You guessed it in " << attempts << " attempts.\n";
        }
    } while (user_guess != secret_number);

    return 0;
}
