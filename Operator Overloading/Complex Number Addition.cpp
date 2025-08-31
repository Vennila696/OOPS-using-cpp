#include <iostream>
using namespace std;
class Complex {
private:
    float real, imag;
public:
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }
    Complex operator+(const Complex &a) {
        return Complex(real + a.real, imag + a.imag);
    }
    void display() const {
        cout << real << " + " << imag << "i";
    }
};
int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2;
    cout << "Complex number 1: ";
    c1.display();
    cout << endl;
    cout << "Complex number 2: ";
    c2.display();
    cout << endl;
    cout << "Sum of complex numbers: ";
    c3.display();
    cout << endl;
    return 0;
}
