#include<iostream>
using namespace std;
class Complex{
    int real;
    int imag;
    public:
    void setData(){
        cout<<"Enter Real Part : ";
        cin>>real;
        cout<<"Enter Imaginary Part : ";
        cin>>imag;
    }
    void Display(){
        if(imag >= 0)
        cout << real << " + " << imag << "i\n";
        else
        cout << real << " - " << -imag << "i\n";
    }
    Complex operator+(const Complex &c1)const{
    Complex temp;

    temp.real = real + c1.real;
    temp.imag = imag + c1.imag;

    return temp;
    }
};
int main(){
    Complex c1,c2,c3;
    c1.setData();c2.setData();
    c3=c1+c2;
    cout<<"Addition = ";
    c3.Display();
    return 0;
}