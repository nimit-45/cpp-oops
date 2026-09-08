#include<iostream>
using namespace std;
class BankAccount{
    int acc_no;
    double balance=0;
    public:
    BankAccount(){
        cout<<"Enter Account Number : ";
        cin>>acc_no;
        cout<<"Enter Balance : ";
        cin>>balance;
        cout<<"-----------------------------\n";
    }
    void transfer(BankAccount &r1,double amount){
        if(amount<=balance){
            r1.balance+=amount;
            balance-=amount;
            cout<<"Transaction Successful....\n";
            cout<<"Balance Remaining = "<<balance;
        }
        else{
            cout<<"Inefficient Balance !!";
        }
    }

};
int main(){
    BankAccount s1,r1;
    double amount;

    cout<<"Enter Amount to send : ";
    cin>>amount;
    s1.transfer(r1,amount);
    return 0;
}