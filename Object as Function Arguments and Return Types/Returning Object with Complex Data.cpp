#include <iostream>
using namespace std;
class ComplexNumber {
private:
    float r, i;
public:
    ComplexNumber(float real = 0, float imag = 0) : r(real), i(imag) {}
    void display() const {
        cout << r << " + " << i << "i" << endl;
    }
    friend ComplexNumber addComplex(ComplexNumber c1, ComplexNumber c2);
};
ComplexNumber addComplex(ComplexNumber c1, ComplexNumber c2) {
    return ComplexNumber(c1.r + c2.r, c1.i + c2.i);
}
int main() {
    ComplexNumber n1(7.5, 1.5), n2(3, 4.9);
    cout << "First Complex Number: ";
    n1.display();
    cout << "Second Complex Number: ";
    n2.display();
    ComplexNumber sum = addComplex(n1, n2);
    cout << "Sum of Complex Numbers: ";
    sum.display();
    return 0;
}
