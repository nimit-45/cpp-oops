#include<iostream>
#include<string>
using namespace std;
class Student{
    string Name;
    int RollNo;
    public:
    void setData(string n,int r){
        Name=n;
        RollNo=r;
    }
    void displayData(){
        cout<<"Student Details : \n";
        cout<<"Name : "<<Name<<"\n";
        cout<<"RollNo : "<<RollNo;
    }
};
int main(){
    Student s1;
    s1.setData("Nimit",2);
    s1.displayData();
    return 0;
}

