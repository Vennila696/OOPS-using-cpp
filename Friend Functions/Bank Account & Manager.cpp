#include <iostream>
using namespace std;
class BankAccount {
private:
    float balance;
public:
    BankAccount(float initial_balance) { balance = initial_balance; }
    friend class BankManager;
};
class BankManager {
public:
    void checkBalance(BankAccount acc) {
        cout << "Current Balance: $" << acc.balance << endl;
    }
    void modifyBalance(BankAccount &acc, float amount) {
        acc.balance += amount;
        cout << "Balance updated successfully.\n";
    }
};
int main() {
    BankAccount myAccount(10000);
    BankManager manager;
    cout << "Before modification:\n";
    manager.checkBalance(myAccount);
    manager.modifyBalance(myAccount, 500);
    cout << "\nAfter modification:\n";
    manager.checkBalance(myAccount);
    return 0;
}
