#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rollDice() {
    return rand() % 6 + 1; // Returns a number between 1 and 6
}

int main() {
    srand(time(0)); // Seed for random number generator
    char playAgain;
    int p1Score = 0, p2Score = 0, round = 1;

    cout << "Welcome to the 2-Player Dice Game!" << endl;

    do {
        cout << "\nRound " << round << endl;

        cout << "Player 1, press Enter to roll the dice...";
        cin.ignore();
        int p1 = rollDice();
        cout << "Player 1 rolled: " << p1 << endl;

        cout << "Player 2, press Enter to roll the dice...";
        cin.ignore();
        int p2 = rollDice();
        cout << "Player 2 rolled: " << p2 << endl;

        if (p1 > p2) {
            cout << "Player 1 wins this round!" << endl;
            p1Score++;
        } else if (p2 > p1) {
            cout << "Player 2 wins this round!" << endl;
            p2Score++;
        } else {
            cout << "It's a tie!" << endl;
        }

        cout << "Current Score - Player 1: " << p1Score << " | Player 2: " << p2Score << endl;

        cout << "\nDo you want to play another round? (y/n): ";
        cin >> playAgain;
        cin.ignore(); // Clean input buffer
        round++;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "\nFinal Score - Player 1: " << p1Score << " | Player 2: " << p2Score << endl;

    if (p1Score > p2Score)
        cout << "Player 1 is the overall winner!" << endl;
    else if (p2Score > p1Score)
        cout << "Player 2 is the overall winner!" << endl;
    else
        cout << "The game ended in a draw!" << endl;

    return 0;
}
