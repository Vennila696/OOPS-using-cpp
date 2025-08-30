#include <iostream>
using namespace std;
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++)
        fact *= i;
    return fact;
}
int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    if (num < 0)
        cout << "Factorial of a negative number doesn't exist." << endl;
    else
        cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}
