#include <iostream>
#include <string>
using namespace std;
class Employee{
    int empid;
    string name;
    public:
    Employee(){
        cout<<"Enter Employee ID : ";
        cin>>empid;
        cout<<"Enter Employee Name : ";
        getline(cin>>ws,name);
    }
    void display(){
        cout<<"Employee Details : \n";
        cout<<"Employee ID : "<<empid<<"\n";
        cout<<"Employee Name : "<<name<<"\n";
    }
};
class Manager : public Employee{
    string department;
    double salary;
    public:
    Manager(){
        cout<<"Enter Department : ";
        getline(cin>>ws,department);
        cout<<"Enter Salary : ";
        cin>>salary;
    }
    void display(){
        Employee::display();
        cout<<"Manager Department : "<<department<<"\n";
        cout<<"Manager Salary : "<<salary<<"\n";
        cout<<"------------------\n";
    }
};
int main(){
    Manager arr[5];
    cout<<"-----------------------\n";
    for (int i = 0; i < 5; i++)
    {
        arr[i].display();
    }
    return 0;
}