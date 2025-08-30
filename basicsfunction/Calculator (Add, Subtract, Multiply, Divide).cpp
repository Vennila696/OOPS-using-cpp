#include <iostream>
using namespace std;
int main() {
    int num1, num2, choice;
    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;
    cout << "Choices:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: cout << "Addition: " << num1 + num2; break;
        case 2: cout << "Subtraction: " << num1 - num2; break;
        case 3: cout << "Multiplication: " << num1 * num2; break;
        case 4:
            if (num2 != 0)
                cout << "Division: " << num1 / num2;
            else
                cout << "Error! Division by zero.";
            break;
        default: cout << "Invalid choice!";
    }
    cout << endl;
    return 0;
}
