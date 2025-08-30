#include <iostream>
using namespace std;
int main() {
    int a, b, gcd = 1;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }
    cout << "GCD of " << a << " and " << b << " is: " << gcd << endl;
    return 0;
}
