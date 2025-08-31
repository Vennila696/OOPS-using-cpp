#include <iostream>
using namespace std;
void swapV(int a, int b) {  // Call by Value
    int t = a;
    a = b;
    b = t;
    cout << "Inside swapV: a = " << a << ", b = " << b << endl;
}
void swapR(int &a, int &b) { // Call by Reference
    int t = a;
    a = b;
    b = t;
    cout << "Inside swapR: a = " << a << ", b = " << b << endl;
}
int main() {
    int x = 5, y = 10;
    cout << "Before swapV: x = " << x << ", y = " << y << endl;
    swapV(x, y);
    cout << "After swapV: x = " << x << ", y = " << y << endl;
    cout << "\nBefore swapR: x = " << x << ", y = " << y << endl;
    swapR(x, y);
    cout << "After swapR: x = " << x << ", y = " << y << endl;
    return 0;
}
