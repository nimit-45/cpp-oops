#include<iostream>
#include<string>
using namespace std;
class Student{
    string name;
    int rollNo;
    int marks[5];
    public:
    int total=0;
    char grade;
    float percentage=0;
    Student(){
        cout<<"Enter Name : ";
        getline(cin,name);
        cout<<"Enter Rollno : ";
        cin>>rollNo;
        cout<<"Enter Marks : \n";
        for(int i=0;i<5;i++){
            cin>>marks[i];
        }
    }
    void Total_Marks(){
        for(int i=0;i<5;i++){
            total+=marks[i];
        }
    }
    void Percentage(){
        percentage=total/5.0;
    }
    void Cal_grade(){
        if(percentage>=90){
            grade='A';
        }
        else if (percentage>=75){
            grade='B';
        }
        else if(percentage>=60){
            grade='C';
        }
        else if (percentage>=40){
            grade='D';
        }
        else{
            grade='F';
        }
    }
    void display(){
        cout<<"Total Marks : "<<total<<"\n";
        cout<<"Percentage : "<<percentage<<"%"<<"\n";
        cout<<"Grade : "<<grade;
    }
};
int main(){
    Student S1;
    S1.Total_Marks();
    S1.Percentage();
    S1.Cal_grade();
    S1.display();
    return 0;
}