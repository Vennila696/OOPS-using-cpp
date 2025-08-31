#include <iostream>
using namespace std;
inline int sq(int x) {
    return x * x;
}
inline int cb(int x) {
    return x * x * x;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Square of " << num << " is: " << sq(num) << endl;
    cout << "Cube of " << num << " is: " << cb(num) << endl;
    return 0;
}
