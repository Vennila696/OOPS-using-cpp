#include <iostream>
using namespace std;
class Circle {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double getArea() const {
        return 3.141 * radius * radius;
    }
    void setRadius(double newRadius) {
        radius = newRadius;
    }
};
Circle resizeCircle(Circle c, double newRadius) {
    c.setRadius(newRadius);
    return c;
}
int main() {
    Circle myCircle(5.0);
    cout << "Original Area: " << myCircle.getArea() << endl;
    myCircle = resizeCircle(myCircle, 9.0);
    cout << "New Area: " << myCircle.getArea() << endl;
    return 0;
}
