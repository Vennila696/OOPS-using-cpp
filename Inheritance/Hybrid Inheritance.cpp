#include <iostream>
using namespace std;
class Shape {
protected:
    void draw() {
        cout << "\nDrawing Shape.";
    }
};
class Circle : protected Shape {
protected:
    void draw() {
        cout << "\nDrawing a Circle.";
    }
};
class Color {
    void applycolor() {
        cout << "\nApplying color.";
    }
protected:
    void ac() {
        applycolor();
    }
};
class ColoredCircle : protected Circle, private Color {
public:
    void paint() {
        draw();
        ac();
    }
};
int main() {
    ColoredCircle c;
    c.paint();
    return 0;
}
