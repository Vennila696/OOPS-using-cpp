#include <iostream>
using namespace std;
class Bank_Account {
    int account_number;
    float balance;
public:
    Bank_Account() {
        account_number = 0;
        balance = 0.0;
    }
    Bank_Account(int acc, float bal) {
        account_number = acc;
        balance = bal;
    }
    Bank_Account(const Bank_Account &B) {
        account_number = B.account_number;
        balance = B.balance;
    }
    void display() {
        cout << "\nAccount Number: " << account_number;
        cout << "\nBalance amount: " << balance;
    }
};
int main() {
    Bank_Account b1;
    int acc;
    float bal;
    cout << "Enter your account number: ";
    cin >> acc;
    cout << "Enter the balance: ";
    cin >> bal;
    Bank_Account b2(acc, bal), b3(b2);
    b1.display();
    b2.display();
    b3.display();
    return 0;
}
