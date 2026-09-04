#include<iostream>
using namespace std;
class BankAccount{
    int accountNumber;
    double balance=0;
    public:
    BankAccount(){
        cout<<"Enter Account Number : ";
        cin>>accountNumber;
    }
    void deposit(double amount){
        balance+=amount;
    }
    void withdraw(double amount){
        if (amount<=balance){
            balance-=amount;
            cout<<"WithDrawal Successful ...\n";
        }
        else{
            cout<<"Insufficient Balance !!!\n ";
        }
    }
    void displayBalance(){
        cout<<"Balance = "<<balance;
    }

};
int main (){
    BankAccount B1;
    double d,w;
    cout<<"Enter Deposit Amount : ";
    cin>>d;
    B1.deposit(d);
    cout<<"Enter Withdrawal Amount : ";
    cin>>w;
    B1.withdraw(w);
    B1.displayBalance();
    return 0;
}