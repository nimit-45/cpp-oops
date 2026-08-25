#include<iostream>
using namespace std;
int main(){
    int n,rev=0,org;
    cout<<"Enter a number: ";
    cin>>n;
    org=n;
    while(n!=0){
        rev=rev*10+n%10;
        n=n/10;

    }
    if(org==rev){
        cout<<org<<" is a palindrome number."<<endl;
    }
    else{
        cout<<org<<" is not a palindrome number."<<endl;
    }
    return 0;
}