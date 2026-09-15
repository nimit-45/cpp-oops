#include<iostream>
using namespace std;
class Maximum{
    public:
    void max(int a,int b){
        if(a>=b){
            cout<<"Maximum Number is : "<<a<<"\n";
        }
        else{
            cout<<"Maximum Number is : "<<b<<"\n";  
        }
    }
    void max(int a,int b,int c){
        if(a>=b && a>=c){
            cout<<"Maximum Number is : "<<a<<"\n";  
        }
        else if(b>=c){
            cout<<"Maximum Number is : "<<b<<"\n";  
        }
        else{
            cout<<"Maximum Number is : "<<c<<"\n";  
        }
    }
    void max(float a , float b){
        if(a>=b){
            cout<<"Maximum Number is : "<<a<<"\n";
        }
        else{
            cout<<"Maximum Number is : "<<b<<"\n";  
        }
    }
};
int main(){
    Maximum m;
    int a,b,c;
    float x,y;
    cout<<"Enter three Integers : ";
    cin>>a>>b>>c;
    cout<<"Enter Two Floating Point Numbers : ";
    cin>>x>>y;
    m.max(a,b);
    m.max(a,b,c);
    m.max(x,y);
    return 0;
}