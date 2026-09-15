#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    A(){
        cout<<"Enter Number : ";
        cin>>a;
    }
    friend void sum(const A &x,const B &y);
};
class B{
    int b;
    public:
    B(){
        cout<<"Enter Number : ";
        cin>>b;
    }
    friend void sum(const A &x,const B &y);
};
void sum(const A &x,const B &y){
    cout<<"Addition = "<<x.a+y.b;
}
int main(){
    A a;
    B b;
    sum(a,b);
    return 0;
}