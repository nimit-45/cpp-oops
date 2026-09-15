#include<iostream>
using namespace std;
class Numbers{
    int a,b;
    public:
    Numbers(){
        cout<<"Enter Two Numbers : ";
        cin>>a>>b;
    }
    friend void largest(const Numbers &n);
};
void largest(const Numbers &n){
    if(n.a>n.b){
        cout<<"Largest = "<<n.a<<"\n";
    }
    else if(n.a==n.b){
        cout<<"Both are Equal..\n";
    }
    else{
        cout<<"Largest = "<<n.b<<"\n";
    }
}
int main(){
    Numbers n1;
    largest(n1);
    return 0;
}
