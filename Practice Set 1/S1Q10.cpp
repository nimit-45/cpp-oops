#include<iostream>
using namespace std;
int main(){
    int n,f;
    cout<<"Enter Array Size";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the Number to Find: "<<endl;
    cin>>f;
    for(int i=0;i<n;i++){
        if(arr[i]==f){
            cout<<"Element found at index = "<<i;
            return 0;
        } 
    }
    cout<<"Element Not Found 404!";
    return 0;

}