#include <iostream> 
using namespace std; 
 
template<typename T> 
class Pair{ 
    T first; 
    T second; 
    public: 
    Pair(){ 
        cout<<"Enter Two Numbers to Compare : "; 
        cin>>first>>second; 
    } 
 
    T maximum()const{ 
        return (first>second)?first:second; 
    } 
    T minimum()const{ 
        return (first<second)?first:second; 
    } 
    void display()const{ 
        cout<<"First = "<<first<<" & Second = "<<second<<"\n"; 
        cout<<"Maximum = "<<maximum()<<"\n"; 
        cout<<"Minimum = "<<minimum()<<"\n"; 
    } 
}; 

int main(){ 
 
    Pair<int>p1; 
    p1.display(); 
    Pair<float>p2; 
    p2.display(); 
    return 0; 