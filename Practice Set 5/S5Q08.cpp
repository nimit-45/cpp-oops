#include <iostream>
using namespace std;
template<typename T>
class Array{
    T arr[5];
    public:
    void setData(){
        cout<<"Enter 5 Elements of Array :\n";
        for (int i = 0; i < 5; i++)
        {
            cout<<"Enter "<<i+1<<"th element : ";
            cin>>arr[i];
        }
        
    }
    void displayData()const{
        cout<<"Array Elements : ";
        for (int i = 0; i < 5; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";   
    }
    T findLargest()const{
        T max=arr[0];
        for (int i = 0; i < 5; i++)
        {
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;   
    }
        T findSmallest()const{
        T min=arr[0];
        for (int i = 0; i < 5; i++)
        {
            if(arr[i]<min){
                min=arr[i];
            }
        }
        return min;   
    }
};

int main(){
    Array <int>a1;
    cout<<"Integer Array : \n";
    a1.setData();
    a1.displayData();
    cout<<"Largest in Integer Array : "<<a1.findLargest()<<"\n";
    cout<<"Smallest in Integer Array : "<<a1.findSmallest()<<"\n";
    cout<<"--------------------------\n";

    Array <float>a2;
    cout<<"Floating Point Numbers Array : \n";
    a2.setData();
    a2.displayData();
    cout<<"Largest in Floating Point Numbers Array : "<<a2.findLargest()<<"\n";
    cout<<"Smallest in Floating Point Numbers Array : "<<a2.findSmallest()<<"\n";

    return 0;
}