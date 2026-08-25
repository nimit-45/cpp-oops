#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements ";
    cin>>n;
    int arr[n]; // or int*arr = new int[n]; .... then atlast delete[]arr;
    cout<<"Enter Elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }
    cout<<"Maximum Element is :"<<max<<endl;
    return 0;
}