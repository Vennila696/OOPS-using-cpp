#include <iostream>
using namespace std;
float discount(float price, float rate = 10) {
    return price - (price * rate / 100);
}
int main() {
    float price, rate;
    cout << "Enter original price: ";
    cin >> price;
    cout << "Enter discount rate (0 for default 10%): ";
    cin >> rate;z
    if (rate == 0) rate = 10;
    float finalPrice = discount(price, rate);
    cout << "Final price: " << finalPrice << endl;
    return 0;
}
