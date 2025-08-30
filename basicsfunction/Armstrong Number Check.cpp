#include <iostream>
#include <cmath>
using namespace std;
bool isArmstrong(int num) {
    int original = num, sum = 0, digits = 0;
    for (int temp = num; temp > 0; temp /= 10) digits++;
    while (num > 0) {
        int rem = num % 10;
        sum += pow(rem, digits);
        num /= 10;
    }
    return sum == original;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isArmstrong(num))
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is NOT an Armstrong number." << endl;

    return 0;
}
