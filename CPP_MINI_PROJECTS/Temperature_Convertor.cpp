#include <iostream>
using namespace std;
// Function Prototypes
double celsiusToFahrenheit(double c);
double fahrenheitToCelsius(double f);
double celsiusToKelvin(double c);
double kelvinToCelsius(double k);
int main(){
    int choice, repeat;
    double temp, converted;
    do{
        // Menu
        cout << "\n===== TEMPERATURE CONVERTER =====" << endl;
        cout << "1. Celsius to Fahrenheit" << endl;
        cout << "2. Fahrenheit to Celsius" << endl;
        cout << "3. Celsius to Kelvin" << endl;
        cout << "4. Kelvin to Celsius" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        cout << "Enter temperature: ";
        cin >> temp;

        switch (choice){
        case 1:
            cout << "Temperature in Celsius: " << temp << " C" << endl;
            cout << "Converting Celsius to Fahrenheit..." << endl;
            converted = celsiusToFahrenheit(temp);
            cout << "Temperature in Fahrenheit: " << converted << " F" << endl;
            break;
        case 2:
            cout << "Temperature in Fahrenheit: " << temp << " F" << endl;
            cout << "Converting Fahrenheit to Celsius..." << endl;
            converted = fahrenheitToCelsius(temp);
            cout << "Temperature in Celsius: " << converted << " C" << endl;
            break;
        case 3:
            cout << "Temperature in Celsius: " << temp << " C " << endl;
            cout << "Converting Celsius to Kelvin..." << endl;
            converted = celsiusToKelvin(temp);
            cout << "Temperature in Kelvin: " << converted << " K" << endl;
            break;
        case 4:
            cout << "Temperature in Kelvin: " << temp << " K" << endl;
            cout << "Converting Kelvin to Celsius..." << endl;
            converted = kelvinToCelsius(temp);
            cout << "Temperature in Celsius: " << converted << " C" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }

        cout << "\nPress 1 to convert again, or any other key to exit: ";
        cin >> repeat;

    } 
    while (repeat == 1);
    cout << "Program exited. Thank you!" << endl;
    return 0;
}
// Function Definitions
double celsiusToFahrenheit(double c)
{
    return (c * 9.0 / 5.0) + 32;
}
double fahrenheitToCelsius(double f)
{
    return (f - 32) * 5.0 / 9.0;
}
double celsiusToKelvin(double c)
{
    return c + 273.15;
}
double kelvinToCelsius(double k)
{
    return k - 273.15;
}
