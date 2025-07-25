#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to display the current state of the guessed word
void displayWord(string word, string guessed) {
    for (int i = 0; i < word.length(); i++) {
        if (guessed.find(word[i]) != string::npos)
            cout << word[i] << " ";
        else
            cout << "_ ";
    }
    cout << endl;
}

// Function to check if word is fully guessed
bool isWordGuessed(string word, string guessed) {
    for (int i = 0; i < word.length(); i++) {
        if (guessed.find(word[i]) == string::npos)
            return false;
    }
    return true;
}

int main() {
    string wordList[] = {"apple", "banana", "cherry", "grape", "mango"};
    srand(time(0));
    string word = wordList[rand() % 5]; // Random word
    string guessed = "";
    int maxTries = 6;
    int wrongGuesses = 0;
    char guess;

    cout << " Welcome to Hangman!" << endl;

    while (wrongGuesses < maxTries && !isWordGuessed(word, guessed)) {
        cout << "\nWord: ";
        displayWord(word, guessed);
        cout << "Guessed letters: " << guessed << endl;
        cout << "Attempts left: " << maxTries - wrongGuesses << endl;

        cout << "Enter a letter: ";
        cin >> guess;

        guess = tolower(guess); // Make lowercase
        if (guessed.find(guess) != string::npos) {
            cout << " You already guessed that letter!" << endl;
            continue;
        }

        guessed += guess;

        if (word.find(guess) == string::npos) {
            cout << " Wrong guess!" << endl;
            wrongGuesses++;
        } else {
            cout << " Correct guess!" << endl;
        }
    }

    if (isWordGuessed(word, guessed)) {
        cout << "\n Congratulations! You guessed the word: " << word << endl;
    } else {
        cout << "\n Game Over! The word was: " << word << endl;
    }

    return 0;
}
