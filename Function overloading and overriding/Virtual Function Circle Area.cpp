#include <iostream>
#include <cmath>
using namespace std;
class Shape {
public:
    virtual void area() {
        cout << "Calculating area for a shape..." << endl;
    }
};
class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r) : radius(r) {}
    void area() override {
        Shape::area();
        float result = 3.14159f * pow(radius, 2);
        cout << "Area of the Circle: " << result << endl;
    }
};
int main() {
    float r;
    cout << "Enter radius of the circle: ";
    cin >> r;
    Circle c(r);
    c.area();
    return 0;
}
