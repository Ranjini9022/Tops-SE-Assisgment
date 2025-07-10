/*3. Control Flow Statements
2. Number Guessing Game
Write a C++ program that asks the user to guess a number between 1 and 100.The program should provide hints if the guess is too high or too low. Use loops to allow the user multiple attempts.*/

#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

using namespace std;

int main() {
    // Initialize random seed
    srand(time(0));
    
    // Generate random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Guess the number (between 1 and 100): ";

    do {
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "Too low. Try again: ";
        } else if (guess > secretNumber) {
            cout << "Too high. Try again: ";
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        }
    } while (guess != secretNumber);
}


