#include <iostream>
using namespace std;
class Account{
    int accountNumber;
    double balance;
    public:
    Account(){
        cout<<"Enter Account Number : ";
        cin>>accountNumber;
        cout<<"Enter Balance : ";
        cin>>balance;
    }
    void display()const{
        cout<<"Account Details ......\n";
        cout<<"Account Number : "<<accountNumber<<"\n";
        cout<<"Account Balance : "<<balance<<"\n";
    }
};
class SavingsAccount : public Account {
    public:
    void display() const {
        Account::display();
        cout << "Account Type : Savings Account\n";
    }
};

class CurrentAccount : public Account {
    public:
    void display() const {
        Account::display();
        cout << "Account Type : Current Account\n";
    }
};

int main(){
    SavingsAccount s1;
    s1.display();
    CurrentAccount c1;
    c1.display();
    return 0;
}