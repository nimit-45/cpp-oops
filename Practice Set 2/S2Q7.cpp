#include<iostream>
#include<string>
using namespace std;
class Employee{
    string employeeName;
    float basicSalary;
    public:
    float HRA,DA;
    Employee(){
        cout<<"Enter Employee Name : ";
        cin>>employeeName;
        cout<<"Enter Basic Pay : ";
        cin>>basicSalary;
    }
    void calculate_HRA(){
        HRA=.2*basicSalary;
        cout<<"HRA = "<<HRA<<"\n";
    }
    void calculate_DA(){
        DA=.1*basicSalary;
        cout<<"DA = "<<DA<<"\n";
    }
    void grossSalary(){
        float grossSalary=basicSalary+DA+HRA;
        cout<<"Gross Salary = "<<grossSalary;
    }
};
int main(){
    Employee E1;
    E1.calculate_HRA();
    E1.calculate_DA();
    E1.grossSalary();
    return 0;
}