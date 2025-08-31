#include <iostream>
using namespace std;
class Rectangle {
private:
    int length;
    int width;
public:
    Rectangle(int l, int w) {
        this->length = l;
        this->width = w;
    }
    int area() {
        return this->length * this->width;
    }
    int perimeter() {
        return 2 * (this->length + this->width);
    }
};
int main() {
    Rectangle rect1(10, 5);
    Rectangle rect2(7, 3);
    int (Rectangle::*funcPtr)();
    funcPtr = &Rectangle::area;
    cout << "Rectangle 1 Area: " << (rect1.*funcPtr)() << "\n";
    funcPtr = &Rectangle::perimeter;
    cout << "Rectangle 1 Perimeter: " << (rect1.*funcPtr)() << "\n";
    funcPtr = &Rectangle::area;
    cout << "Rectangle 2 Area: " << (rect2.*funcPtr)() << "\n";
    funcPtr = &Rectangle::perimeter;
    cout << "Rectangle 2 Perimeter: " << (rect2.*funcPtr)() << "\n";
    return 0;
}
