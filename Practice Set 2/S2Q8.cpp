#include<iostream>
using namespace std;
class Marks{
    int arr[5];
    int highest;
    public:
    Marks(){
        cout<<"Enter 5 Array Elements ...\n";
        for (int i=0;i<5;i++){
            cin>>arr[i];
        }
    }
    void Cal_Hightest(){
        highest=arr[0];
        for(int i=1;i<5;i++){
            if(arr[i]>=highest){
                highest=arr[i];
            }
        }
    }
    void displayHighest(){
        cout<<"Highest Marks are : "<<highest;
    }

};
int main(){
    Marks M1;
    M1.Cal_Hightest();
    M1.displayHighest();
    return 0;
}