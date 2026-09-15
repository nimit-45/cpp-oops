#include<iostream>
using namespace std;
class Area{
    public:
    void calculate(int s){
        cout<<"The Area of Square is = "<<s*s<<"\n";
    }
    void calculate(int l , int b){
        cout<<"The Area of Rectangle is = "<<l*b<<"\n";
    }
    void calculate(double r){
        cout<<"The Area of Circle is = "<<3.14*r*r<<"\n";
    }   
};
int main(){
    Area a;
    int side,length,breadth;
    double radius;
    cout<<"Enter Side of Square : ";
    cin>>side;
    cout<<"Enter Length of Rectangle : ";
    cin>>length;
    cout<<"Enter Breadth of Rectangle : ";
    cin>>breadth;
    cout<<"Enter Radius of Circle : ";
    cin>>radius;
    a.calculate(side);
    a.calculate(length,breadth);
    a.calculate(radius);
    return 0;
}