#include <iostream>
using namespace std;
template <class T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}
int main() {
    int i1, i2;
    float f1, f2;
    char c1, c2;
    cout << "Enter 2 integers: ";
    cin >> i1 >> i2;
    cout << "Before Swap:\nX=" << i1 << "\nY=" << i2 << endl;
    swapValues(i1, i2);
    cout << "After Swap:\nX=" << i1 << "\nY=" << i2 << endl;
    cout << "\nEnter 2 floats: ";
    cin >> f1 >> f2;
    cout << "Before Swap:\nX=" << f1 << "\nY=" << f2 << endl;
    swapValues(f1, f2);
    cout << "After Swap:\nX=" << f1 << "\nY=" << f2 << endl;
    cout << "\nEnter 2 characters: ";
    cin >> c1 >> c2;
    cout << "Before Swap:\nX=" << c1 << "\nY=" << c2 << endl;
    swapValues(c1, c2);
    cout << "After Swap:\nX=" << c1 << "\nY=" << c2 << endl;
    return 0;
}
