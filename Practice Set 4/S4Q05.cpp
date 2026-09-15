#include<iostream>
using namespace std;
class Student{
    public:
    static int count;
    Student(){
        cout<<"Student Created\n";
        count++;
    }
};
int Student::count=0;
int main(){
    int n;
    cout<<"Enter Number of Students : ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        Student si;
    }
    cout<<"Number of Students = "<<Student::count<<"\n";
    return 0;   
}
