#include <iostream>
#include <string>
using namespace std;
string rotateString(string str, int n) {
    if (str.empty()) return str;
    n %= str.size();
    return str.substr(n) + str.substr(0, n);
}
int main() {
    string str;
    int shift;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter shift value: ";
    cin >> shift;
    cout << "Rotated String: " << rotateString(str, shift) << endl;
    return 0;
}
