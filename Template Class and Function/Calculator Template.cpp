#include <iostream>
using namespace std;
template <class T>
class Calculator {
private:
    T num1, num2;
public:
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }
    T add() { return num1 + num2; }
    T sub() { return num1 - num2; }
    T multiply() { return num1 * num2; }
    T divide() { return num1 / num2; }
    void display() {
        cout << "Numbers are: " << num1 << " and " << num2;
        cout << "\nAddition: " << add();
        cout << "\nSubtraction: " << sub();
        cout << "\nMultiplication: " << multiply();
        cout << "\nDivision: " << divide() << endl;
    }
};
int main() {
    Calculator<int> intCal(9, 6);
    cout << "Integer Result:\n";
    intCal.display();
    Calculator<float> floatCal(8.0f, 2.0f);
    cout << "\nFloat Result:\n";
    floatCal.display();
    return 0;
}
