#include <iostream>
using namespace std;

// Function prototypes
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
// BASIC_CALCULATOR.cpp
// A simple calculator program in C++ that performs basic arithmetic operations

int main()
{
    double num1, num2, result;
    int choice;

    // Menu
    cout << "===== BASIC CALCULATOR =====" << endl;
    cout << "Press 1 for Addition (+)" << endl;
    cout << "Press 2 for Subtraction (-)" << endl;
    cout << "Press 3 for Multiplication (*)" << endl;
    cout << "Press 4 for Division (/)" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    // Input values
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Switch logic
    switch (choice)
    {
    case 1:
        result = add(num1, num2);
        cout << "Result = " << result << endl;
        break;
    case 2:
        result = subtract(num1, num2);
        cout << "Result = " << result << endl;
        break;
    case 3:
        result = multiply(num1, num2);
        cout << "Result = " << result << endl;
        break;
    case 4:
        result = divide(num1, num2);
        cout << "Result = " << result << endl;
        break;
    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}

// Function definitions
double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    if (b == 0)
    {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return a / b;
}
// End of BASIC_CALCULATOR.cpp