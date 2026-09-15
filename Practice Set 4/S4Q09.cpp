#include<iostream>
using namespace std;
class Interest{
    int p,r,t;
    public:
    Interest(){
        cout<<"Enter Principal Amount : ";
        cin>>p;
        cout<<"Enter Rate of Interest : ";
        cin>>r;
        cout<<"Enter Time : ";
        cin>>t;
    }
    inline void calculateSI(){
        cout<<"Simple Interest = "<<(p*r*t)/100<<"\n";
    }
};
int main(){
    Interest i;
    i.calculateSI();
    return 0;
}