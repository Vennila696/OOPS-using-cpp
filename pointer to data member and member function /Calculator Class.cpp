#include <iostream>
using namespace std;
class Calculator {
private:
    float result;
public:
    float add(float a, float b) {
        this->result = a + b;
        return this->result;
    }
    float subtract(float a, float b) {
        this->result = a - b;
        return this->result;
    }
    float multiply(float a, float b) {
        this->result = a * b;
        return this->result;
    }
    float divide(float a, float b) {
        if (b != 0) {
            this->result = a / b;
            return this->result;
        } else {
            cout << "Division by zero error\n";
            return 0;
        }
    }
};
int main() {
    Calculator calc;
    float a = 10, b = 5;
    cout << "Addition: " << calc.add(a, b) << "\n";
    cout << "Subtraction: " << calc.subtract(a, b) << "\n";
    cout << "Multiplication: " << calc.multiply(a, b) << "\n";
    cout << "Division: " << calc.divide(a, b) << "\n";
    return 0;
}
