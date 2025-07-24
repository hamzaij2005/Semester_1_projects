#include <iostream>
using namespace std;

// Function Prototype
void displayTable(int num, int x);

int main() {
    int number,x, repeat;

    do {
        // Input
        cout << "\nEnter a number to generate table: ";
        cin >> number;
        cout<<"Want to generat table till ";
        cin>>x;

        // Display table
        displayTable(number,x);
        // Ask user to repeat
        cout << "\nPress 1 to generate another table, or any other key to exit: ";
        cin >> repeat;
    } while (repeat == 1);
    cout << "Program exited. Thank you!" << endl;
    return 0;
}
// Function Definition
void displayTable(int num, int x) {
    cout << "\nMultiplication Table of " << num << ":\n";
    for (int i = 1; i <= x; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}
