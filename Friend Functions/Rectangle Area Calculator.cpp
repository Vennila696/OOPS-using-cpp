#include <iostream>
using namespace std;
class Rectangle {
private:
    float length, width;
public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }
    friend class AreaCalculator;
};
class AreaCalculator {
public:
    void calculateArea(Rectangle r) {
        cout << "Area of Rectangle: " << r.length * r.width << endl;
    }
};
int main() {
    Rectangle rect(17, 12);
    AreaCalculator calc;
    calc.calculateArea(rect);
    return 0;
}
