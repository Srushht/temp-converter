#include <iostream>
using namespace std;

// Function for converting celsius to fahrenheit
float celsiusToFahrenheit(float celsius)
{
    return (celsius * 9 / 5) + 32;
}

// Function for converting Fahrenheit to celcius
float fahrenheitToCelcius(float fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

// Function for converting celsius to kelvin
float celsiustoKelvin(float celsius)
{
    return celsius + 273.15;
}

// Function for converting Kelvin to celsius
float kelvinToCelsius(float kelvin)
{
    return kelvin - 273.15;
}

int main() {

    int choice;
    float temp;

    do
    {

        cout << "<><><> Temprature Converter <><><> " << endl;
        cout << " 1] Celsius to Fahrenheit " << endl;
        cout << " 2] Fahrenheit to Celsius " << endl;
        cout << " 3] Celsius to Kelvin " << endl;
        cout << " 4] Kelvin to Celsius " << endl;
        cout << " 5] Exit" << endl;
        cout << "Enter your choice: " << endl;
        cin >> choice;

        switch (choice)
        {

        case 1:

            // Celsius to Fahrenheit
            cout << "Enter temptrature in Celsius: ";
            cin >> temp;
            cout << "Temperature in Fahrenheit: " << celsiusToFahrenheit(temp) << "F\n";
            break;

        case 2:

            // Fahrenheit to Celsius
            cout << "Enter temptrature in Fahrenheit: ";
            cin >> temp;
            cout << "Temperature in Celsius: " << fahrenheitToCelcius(temp) << "F\n";
            break;

        case 3:

            // Celsius to Kelvin
            cout << "Enter temptrature in Celsius: ";
            cin >> temp;
            cout << "Temperature in Kelvin: " << celsiustoKelvin(temp) << "F\n";
            break;

        case 4:

            // Kelvin to Celsius
            cout << "Enter the Temprature in Kelvin: ";
            cin >> temp;
            cout << "Temperature in Celsius: " << kelvinToCelsius(temp) << "F\n";
            break;

        case 5:

            // Now exit thr program
            cout << "Exiting the Program";
            break;

        default:

               
            // Default case
            cout<< "Invalid choice, Please try again";
            break;
        }
    } while (choice != 5);
    return 0;
}