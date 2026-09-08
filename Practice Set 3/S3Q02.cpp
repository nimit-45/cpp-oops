#include<iostream>
using namespace std;
class Student{
    public:
    int RollNo;
    int Marks;
    void setDetails(){
        cout<<"Enter Roll No. : ";
        cin>>RollNo;
        cout<<"Enter Marks : ";
        cin>>Marks;
    }
};
Student findTop(Student s1,Student s2){
    if(s1.Marks>=s2.Marks){
        return s1;
    }
    else{
        return s2;
    }
}
int main(){
    Student s1,s2,s3;
    s1.setDetails();
    s2.setDetails();
    s3=findTop(s1,s2);
    cout<<"Roll no. of Top Student is "<<s3.RollNo<<" and his Marks are "<<s3.Marks;
    return 0;
    
}