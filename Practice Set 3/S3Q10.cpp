#include<iostream>
using namespace std;
class  Result{
    public:
    int rollno;
    int marks[5];
    void setMarks(){
        cout<<"Enter Rollno : ";
        cin>>rollno;
        cout<<"Enter Marks of Subjects : \n";
        for (int i = 0; i < 5; i++)
        {
            cin>>marks[i];
        }
        cout<<"---------------------------\n";
    }
    void displayMarks(){
        cout<<"Student Result : \n";
        cout<<"Roll No. : "<<rollno<<"\n";
        cout<<"Marks are : ";
        for (int i = 0; i < 5; i++)
        {
            cout<<marks[i]<<" ";
        }
        cout<<"\n---------------------------\n";
    }
    int total() const{
        int total=0;
        for (int i = 0; i < 5; i++)
        {
            total+=marks[i];
        }   
        return total;
    }
    void compare(const Result &s){
        if(total()> s.total()){
            cout<<"Student 1 has Higher Marks...\n";
        }
        else if (total()==s.total()){
            cout<<"Both have Equal Marks...\n";
        }
        
        else{
            cout<<"Student 2 has Higher Marks..\n";
        }
    }

};
Result topper(const Result &s1,const Result &s2, const Result &s3){
    if((s1.total()>=s2.total()) && (s1.total()>=s3.total()) ){
        return s1;
    }    
    else if((s2.total()>=s3.total()) ){
        return s2;
    }
    else
        return s3;
}
 Result gracefunc(const Result &s){
        int graceMarks=0;
        Result gracecopy=s;
        for (int i = 0; i < 5; i++)
        {
            int grace;
            while(true){
                cout<<"Enter Grace Marks to add in Subject "<<i+1<<"  :";
                cin>>grace;
                if(grace<=5 && grace>=0){
                    break;
                }
                cout << "Grace should be between 0 and 5...\n";
            }
            if(graceMarks+grace>20){
                break;
            }
            gracecopy.marks[i]+=grace;
            graceMarks+=grace;    
        }
        return gracecopy;
    }

int main(){
    Result r1,r2,r3,r4,r5;
    cout<<"Enter Marks for 3 Students : \n";
    r1.setMarks();
    r2.setMarks();
    r3.setMarks();

    r1.compare(r2);

    r4=topper(r1,r2,r3);
    cout<<"Topper Rollno : "<<r4.rollno<<" having total marks = "<<r4.total()<<"\n";   

    cout<<"Student 1 Marks Before Grace :\n";
    r1.displayMarks();
    r5=gracefunc(r1);
    cout<<"Student 1 Marks After Grace :\n";
    r5.displayMarks();

    return 0;
}