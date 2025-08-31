#include <iostream>
using namespace std;
int main() {
    float a, b, res;
    cout << "Enter numerator: ";
    cin >> a;
    cout << "Enter denominator: ";
    cin >> b;
    try {
        if (b == 0) {
            throw "Division by zero error.";
        }
        res = a / b;
        cout << "Result: " << res << endl;
    }
    catch (const char *msg) {
        cout << "Exception: " << msg << endl;
    }
    return 0;
}
