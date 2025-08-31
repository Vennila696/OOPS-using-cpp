#include <iostream>
using namespace std;
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    int num;
    cout << "Enter a number to find factorial: ";
    cin >> num;
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    return 0;
}
