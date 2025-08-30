#include <iostream>
using namespace std;
int main() {
    int number;
    long long binary = 0;
    int place = 1;
    cout << "Enter a decimal number: ";
    cin >> number;
    int temp = number;
    if (temp == 0) binary = 0;
    while (temp > 0) {
        int rem = temp % 2;
        binary += rem * place;
        place *= 10;
        temp /= 2;
    }
    cout << "Binary of " << number << " is: " << binary << endl;
    return 0;
}
