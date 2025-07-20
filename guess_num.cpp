#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    // Initialize random seed
    srand(time(0));

    int secretNumber = rand() % 100 + 1; // random number between 1 and 100
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I have selected a number between 1 and 100. Try to guess it!\n";

    do
    {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber)
        {
            cout << "Too low! Try again.\n";
        }
        else if (guess > secretNumber)
        {
            cout << "Too high! Try again.\n";
        }
        else
        {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
        }
    } while (guess != secretNumber);

    return 0;
}
