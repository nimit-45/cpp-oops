#include<iostream>
using namespace std;
class Complex{
    public:
    int real;
    int imag;
        void setDetails(){
            cout<<"Enter Real Part = ";
            cin>>real;
            cout<<"Enter Imaginary Part = ";
            cin>>imag;
        }
    void add(Complex c1){
        cout<<"Addition = "<<real+c1.real<<"+ ("<<imag+c1.imag<<")i\n";
    }
    Complex Multiply(Complex c1){
        Complex c2;
        c2.real=(real*c1.real)-(imag*c1.imag);
        c2.imag=(real*c1.imag)+(imag*c1.real);
        return c2;
    }
};
void sub(Complex c1, Complex c2){
    cout<<"Difference = "<<c1.real-c2.real<<" + ("<<c1.imag-c2.imag<<")i\n";
}

int main(){
    Complex c1,c2,c3;
    c1.setDetails();
    c2.setDetails();
    c1.add(c2);
    c3=c1.Multiply(c2);
    sub(c1,c2);
    cout<<"Product = "<<c3.real<<" + ("<<c3.imag<<") i\n";
    return 0;
}
