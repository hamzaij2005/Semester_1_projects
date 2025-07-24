#include <iostream>
using namespace std;

// Function Prototypes
int isEven(int num);
int isPrime(int num);

int main() {
    int number, repeat;
    do {
        // Input
        cout << "\nEnter a number: ";
        cin >> number;

        // Even or Odd
        if (isEven(number) == 1)
            cout << number << " is Even." << endl;
        else
            cout << number << " is Odd." << endl;

        // Prime Check
        if (isPrime(number) == 1)
            cout << number << " is Prime." << endl;
        else
            cout << number << " is Not Prime." << endl;

        // Repeat check
        cout << "\nPress 1 to check another number, or any other key to exit: ";
        cin >> repeat;

    } while (repeat == 1);

    cout << "Program exited. Thank you!" << endl;

    return 0;
}

// Function Definitions
int isEven(int num) {
    if (num % 2 == 0)
        return 1;
    else
        return 0;
}

int isPrime(int num) {
    if (num <= 1)
        return 0;

    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
