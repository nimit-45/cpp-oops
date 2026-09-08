#include<iostream>
#include<string>
using namespace std;
class Employee{
    public:
    string Name;
    double Salary;
    void setDetails(){
        cout<<"Enter Employee Name : ";
        getline(cin>>ws,Name); //used >>ws to remove \n left in input buffer....(Good Practice!)
        cout<<"Enter Salary : ";
        cin>>Salary;
        cout<<"----------------------\n";
    }
};
Employee highestSalary(Employee arr[],int size){
    double highest=arr[0].Salary;int high=0;
    for(int i=1;i<size;i++){
        if (arr[i].Salary>=highest){
            highest=arr[i].Salary;
            high=i;
        }
    }
    return arr[high];
}
Employee Increment(Employee e){
    e.Salary+=.1*e.Salary;
    return e;
}
int main(){
    int n;
    cout<<"Enter Number of Employees : ";
    cin>>n;
    Employee*arr=new Employee[n]; // or Employee arr[n];
    for (int i=0;i<n;i++){
        cout<<"Enter Details of Employee "<<i+1<<" :\n";
        arr[i].setDetails();
    }
    Employee e1,e2;
    int choice;
    cout<<"Enter Employee Number for Increment (1 to "<<n<<") :";
    cin>>choice;

    e1=highestSalary(arr,n);
    e2=Increment(arr[choice-1]);
    cout<<"Name of Highest 0Salary Employee = "<<e1.Name<<" Having Salary = "<<e1.Salary<<"\n";
    cout<<"Incremented Salary = "<<e2.Salary;
    delete[]arr;
    return 0;
}
