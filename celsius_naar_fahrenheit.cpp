#include <iostream>
using namespace std;

int main() {
    double temperature_celsius;
    cout << "Enter the current temperature in celsius: ";
    cin >> temperature_celsius;
    double temperature_fahrenheit;
    temperature_fahrenheit = (temperature_celsius * 9/5) + 32;
    cout << "The temperature in fahrenheit is: " << temperature_fahrenheit;
    return 0;
}