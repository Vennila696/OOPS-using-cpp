#include <iostream>
using namespace std;
class BankAccount {
public:
    static int accountCount;
    BankAccount() { createAccount(); }
    void createAccount() { accountCount++; }
};
int BankAccount::accountCount = 0;
int main() {
    BankAccount b1, b2, b3, b4, b5;
    cout << "Total account count: " << BankAccount::accountCount << endl;
    return 0;
}
