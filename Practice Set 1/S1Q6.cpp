#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter a Number ";
    cin>>n;
    while(n!=0){
        sum+=(n%10);
        n=n/10;
    }
    cout<<"The Sum of Digits are:"<<sum<<endl;
    return 0;

        
        
}