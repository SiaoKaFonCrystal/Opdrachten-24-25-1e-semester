#include <iostream>
using namespace std;

int main() {

    double number1;
    cout << "Enter number 1: ";
    cin >> number1;
    double number2;
    cout << "Enter number 2: ";
    cin >> number2;

    int choice;
    cout << " Choose what calculations you need: \n";
    cout << "1. Sum \n";
    cout << "2. Substraction \n";
    cout << "3. Product  \n";
    cout << "4. Division \n";
    cout << "Choose between 1-4 \n";
    cin >> choice;

    switch (choice) {
        case 1: 
        cout << "The sum of your numbers are: " << (number1 + number2) << "\n";
        break;
        case 2:
        cout << "The substraction of your number are: " << (number1 - number2) << "\n";
        break;
        case 3:
        cout << "The product of the two numbers are: " << (number1 * number2) << "\n";
        break;
        case 4:
        if (number2 != 0) {
        cout << "The division of the two numbers are: " << (number1 / number2) << "\n";
        } else {
            cout << "Please enter a valid number \n";
        }
        break;
        default: 
        cout << "Please choose a valid choice!";
        break;
    }

 return 0;
}