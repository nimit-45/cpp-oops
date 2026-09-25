#include <iostream>
using namespace std;
template<typename T>
T largest(const T &a , const T &b){
    if (a>b){
        return a;
    }
    return b;   
}
template<class S>
void swapValues(S &a,S &b){
    S temp=a;
    a=b;
    b=temp;
}
int main(){
    int a=10;
    int b=20;
    cout<<"Larger Integer = "<<largest(a,b)<<"\n";
    cout<<"Before Swapping : "<<a<<" "<<b<<"\n";
    swapValues(a,b);
    cout<<"After Swapping : "<<a<<" "<<b<<"\n";

    float a1=45.7F;
    float b1=7.18F;
    cout<<"Larger Floating Point Number = "<<largest(a1,b1)<<"\n";
    cout<<"Before Swapping : "<<a1<<" "<<b1<<"\n";
    swapValues(a1,b1);
    cout<<"After Swapping : "<<a1<<" "<<b1<<"\n";

    double a2=10.65;
    double b2=69.45;
    cout<<"Larger Double = "<<largest(a2,b2)<<"\n";
    cout<<"Before Swapping : "<<a2<<" "<<b2<<"\n";
    swapValues(a2,b2);
    cout<<"After Swapping : "<<a2<<" "<<b2<<"\n";

    char a3='A';
    char b3='B';
    cout<<"Larger (acc. to ASCII) = "<<largest(a3,b3)<<"\n";
    cout<<"Before Swapping : "<<a3<<" "<<b3<<"\n";
    swapValues(a3,b3);
    cout<<"After Swapping : "<<a3<<" "<<b3<<"\n";

    return 0;
}