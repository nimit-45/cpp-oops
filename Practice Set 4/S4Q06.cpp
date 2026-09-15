#include<iostream>
#include<string>
using namespace std;
class BankAccount{
    int accno;
    string name;
    public:
    static int totalAccounts;
    BankAccount(){
        accno=0;
        name="Unknown";
        cout<<"BankAccount Created\n";
        totalAccounts++;
    }
    static void display();
};
int BankAccount::totalAccounts=0;
void BankAccount:: display(){
    cout<<"Total Bank Accounts (Using Static Member Function) = "<<BankAccount::totalAccounts<<"\n";
}
int main(){
    int n;
    cout<<"Enter Number of BankAccounts : ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        BankAccount si;
    }
    cout<<"Total Bank Accounts (Direct Static Member Access) = "<<BankAccount::totalAccounts<<"\n";
    BankAccount::display();

    return 0;   
}
