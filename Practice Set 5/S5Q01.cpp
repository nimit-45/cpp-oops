#include<iostream>
using namespace std;
class Student{
    string name;
    int rollno;
    int age;
    public:
    Student(){
        cout<<"Enter Name : ";
        getline(cin>>ws,name);
        cout<<"Enter Age : ";
        cin>>age;
        cout<<"Enter Roll No. : ";
        cin>>rollno;
    }
    void display(){
        cout<<"Student Details ...\n";
        cout<<"Student Name : "<<name<<"\n";
        cout<<"Student Age  : "<<age<<"\n";
        cout<<"Student Roll no  : "<<rollno<<"\n";
    }
};
class EngineeringStudent : public Student{
    string branch;
    int semester;
    public:
    EngineeringStudent(){
        cout<<"Enter Branch : ";
        getline(cin>>ws,branch);
        cout<<"Enter Semester : ";
        cin>>semester;
    }
    void display(){
        Student::display();
        cout<<"Student Branch : "<<branch<<"\n";
        cout<<"Student Semester : "<<semester<<"\n";
        cout<<"--------------------------\n";
    }
};
int main(){
    EngineeringStudent e;
    e.display();
    return 0;

}