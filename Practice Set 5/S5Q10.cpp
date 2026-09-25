#include <iostream>
#include<string>
using namespace std;
class Person{
    string name;
    int age;
    public:
    Person(){
        cout<<"Enter Name : ";
        getline(cin>>ws,name);
        cout<<"Enter Age : ";
        cin>>age;
    }
    void display()const{
        cout<<"Person Details .....\n";
        cout<<"Name : "<<name<<"\n";
        cout<<"Age : "<<age<<"\n";
        
    }
};
class Teacher : public Person{
    string subject;
    public:
    Teacher(){
        cout<<"Enter Teacher's Subject : ";
        getline(cin>>ws,subject);
    }
    void display()const{
        Person::display();
        cout<<"Teacher's Subject : "<<subject<<"\n";
        cout<<"-------------------------------\n";
    }
};
class ResearchScholar : public Person{
    string researchArea;
    public:
    ResearchScholar(){
        cout<<"Enter Research Area : ";
        getline(cin>>ws,researchArea);
    }
    void display()const{
        Person::display();
        cout<<"Scholar's Research Area : "<<researchArea<<"\n";
        cout<<"-------------------------------\n";
    }
};

template<class T>
class RecordManager{
    int n;
    T* records;

    public:
    RecordManager(){
        cout<<"Enter Number of Records to Store : ";
        cin>>n;
        records=new T[n];
    }

    void displayRecords()const{
        cout<<"----------------------\n";
        for (int i = 0; i < n; i++)
        {
            records[i].display();
        }
    }
    ~RecordManager() {
    delete[] records;
    }

};
int main(){
    RecordManager<Teacher>r1;
    r1.displayRecords();
    RecordManager<ResearchScholar>r2;
    r2.displayRecords();     
    return 0;
}