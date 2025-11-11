#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<limits>
#include<conio.h>
using namespace std;

// Function to clear input buffer
void clearInputBuffer() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

// Function to validate if input is a number
bool isValidNumber(int &input) {
    if (cin.fail()) {
        clearInputBuffer();
        return false;
    }
    return true;
}

int main() {
    // Initialize random seed once at the beginning
    srand(time(0));
    
    cout << "\n\t\t\tWelcome to Guess the number game!" << endl;
    cout << "You have to guess a number between 1 and 100. You'll have limited choices based on the level you choose. Good Luck!" << endl;

    while(true) {
        cout << "\nEnter the difficulty level: \n";
        cout << "1 for easy!\t";
        cout << "2 for medium!\t";
        cout << "3 for difficult!\t";
        cout << "0 for ending the game!\n" << endl;

        int difficultyChoice;
        cout << "Enter the number:- ";
        cin >> difficultyChoice;
        
        // Validate difficulty choice
        while (!isValidNumber(difficultyChoice) || (difficultyChoice < 0 || difficultyChoice > 3)) {
            cout << "Invalid input. Please enter a valid choice (0, 1, 2, 3): ";
            cin >> difficultyChoice;
        }

        if (difficultyChoice == 0) {
            cout << "\nThanks for playing! Goodbye!" << endl;
            break;
        }

        // Generate a random number between 1 and 100
        int secretNumber = 1 + (rand() % 100);
        int playerChoice;
        int maxChoices;
        string difficultyName;

        // Set game parameters based on difficulty
        switch (difficultyChoice) {
            case 1:
                maxChoices = 10;
                difficultyName = "easy";
                break;
            case 2:
                maxChoices = 7;
                difficultyName = "medium";
                break;
            case 3:
                maxChoices = 5;
                difficultyName = "difficult";
                break;
        }

        cout << "\nYou have " << maxChoices << " choices for finding the secret number between 1 and 100 in " << difficultyName << " mode." << endl;
        int choicesLeft = maxChoices;

        for (int i = 1; i <= maxChoices; i++) {
            cout << "\n\nEnter the number (1-100): ";
            cin >> playerChoice;
            
            // Validate player's guess
            while (!isValidNumber(playerChoice) || playerChoice < 1 || playerChoice > 100) {
                cout << "Invalid input. Please enter a number between 1 and 100: ";
                cin >> playerChoice;
            }

            if (playerChoice == secretNumber) {
                cout << "Well played! You won, " << playerChoice << " is the secret number" << endl;
                cout << "\t\t\tThanks for playing......";
                cout << "\nPlay the game again with us!!\n\n" << endl;
                break;
            } else {
                cout << "Nope, " << playerChoice << " is not the right number\n";
                if (playerChoice > secretNumber) {
                    cout << "The secret number is smaller than the number you have chosen" << endl;
                } else {
                    cout << "The secret number is greater than the number you have chosen" << endl;
                }
                choicesLeft--;
                cout << choicesLeft << " choices left." << endl;
                
                if (choicesLeft == 0) {
                    cout << "You couldn't find the secret number, it was " << secretNumber << ", You lose!!\n\n";
                    cout << "Play the game again to win!!\n\n";
                }
            }
        }
    }
    
    getch();
    return 0;
}