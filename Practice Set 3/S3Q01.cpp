#include<iostream>
using namespace std;
class Number{
    public:
    int num;
};
Number add(Number n1,Number n2){
    Number n3;
    n3.num=n1.num+n2.num;
    return n3;
    
}
int main(){
    Number n1,n2;
    cout<<"Enter Number n1 : ";
    cin>>n1.num;
    cout<<"Enter Number n2 : ";
    cin>>n2.num;
    Number n3=add(n1,n2);
    cout<<"The Sum is "<<n3.num;
    return 0;
}

