#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter Array Size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Sorted Array Elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter Element to Search : ";
    cin>>key;
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            cout<<"Element Found at Index : "<<mid;
            return 0; 
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    cout<<"Element Not Found !!";
    return 0;
}