#include<iostream>
using namespace std;
class ArraySum{
    int arr[10];
    public:
    ArraySum(){
        cout<<"Enter 10 Array Elements ...\n";
        for (int i=0;i<10;i++){
            cin>>arr[i];
        }
    }
    void findSum(){
        int sum=0;
        for (int i=0;i<10;i++){
            sum+=arr[i];
        }
        cout<<"Sum of Array Elements = "<<sum;
    }
};
int main (){
    ArraySum A1;
    A1.findSum();
    return 0;
}