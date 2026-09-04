#include<iostream>
using namespace std ;
class Number{
    int num;
    int flag;
    public:
    void input(){
        cout<<"Enter Number : ";
        cin>>num;
    }
    void isEven(){
        if (num%2==0){
            flag=1;
        }
        else{
            flag=0;
        }
    }
    void displayResult(){
        if(flag){
            cout<<num<<" is an Even Number";
        }
        else{
            cout<<num<<" is not an Even Number";
        }
    }
};
int main(){
    Number n1;
    n1.input();
    n1.isEven();
    n1.displayResult();
    return 0;
}
