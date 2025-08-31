#include <iostream>
using namespace std;
class Rectangle {
public:
    int length, breadth;
    Rectangle() {
        length = 1;
        breadth = 1;
    }
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }
    Rectangle(const Rectangle &R) {
        length = R.length;
        breadth = R.breadth;
    }
    void area() {
        cout << "\nArea of Rectangle: " << length * breadth;
    }
};
int main() {
    Rectangle R1;
    int l, b;
    cout << "Enter the length: ";
    cin >> l;
    cout << "Enter the breadth: ";
    cin >> b;
    Rectangle R2(l, b), R3(R2);
    R1.area();
    R2.area();
    R3.area();
    return 0;
}
