#include <iostream>
using namespace std;

class BankAccount {
    int balance = 5000;

public:
    void withdraw(int amount) {
        try {
            if (amount <= 0)
                throw "Error: Withdrawal amount must be positive.";

            if (amount > balance)
                throw "Error: Insufficient Balance.";

            balance -= amount;
            cout << "Withdrawal successful. Remaining balance: "
                 << balance << endl;
        }
        catch (const char* msg) {
            cout << msg << endl;
        }
    }
};

int main() {
    BankAccount account;
    int amount;

    cout << "Balance: 5000\nWithdraw: ";
    cin >> amount;

    account.withdraw(amount);

    return 0;
}