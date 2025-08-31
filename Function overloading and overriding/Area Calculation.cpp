#include <iostream>
using namespace std;
float computeArea(int l, int b) {
    return l * b;
}
float computeArea(float r) {
    return 3.14159f * r * r;
}
int main() {
    int length, breadth;
    float radius;
    cout << "Length of Rectangle (in cm): ";
    cin >> length;
    cout << "Breadth of Rectangle (in cm): ";
    cin >> breadth;
    cout << "Radius of Circle (in cm): ";
    cin >> radius;
    cout << "Area of Rectangle: " << computeArea(length, breadth) << " cm^2" << endl;
    cout << "Area of Circle: " << computeArea(radius) << " cm^2" << endl;
    return 0;
}
