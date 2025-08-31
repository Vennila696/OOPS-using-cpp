#include <iostream>
using namespace std;
int multiply(int a, int b) {
    return a * b;
}
int main() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    int result = multiply(num1, num2);
    cout << "Multiplication Result: " << result << endl;
    return 0;
}
