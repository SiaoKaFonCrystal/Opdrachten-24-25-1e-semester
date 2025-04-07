#include <iostream>
using namespace std;

int main() {
    const int currentYear = 2025;
    int birthYear;
    cout << "Enter your birthyear: ";
    cin >> birthYear;
    int age;
    age = currentYear - birthYear;
    cout << "Your age is: " << age;
    return 0;
}