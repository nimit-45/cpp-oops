#include <iostream>
using namespace std;
template<typename T>
class Result{
    T Marks[5];
    public:
    Result(){
        cout<<"Enter Marks of 5 Subjects :\n";
        for (int i = 0; i < 5; i++)
        {
            cout<<"Enter Marks of Subject "<<i+1<<" : ";
            cin>>Marks[i];
        }
        
    }
    T totalMarks()const{
        T total=0;
        for (int i = 0; i < 5; i++)
        {
            total+=Marks[i];
        }
        return total;  
    }
    double avgMarks()const{
        return totalMarks()/5.0;
    }
    T highestMarks()const{
        T max=Marks[0];
        for (int i = 0; i < 5; i++)
        {
            if(Marks[i]>max){
                max=Marks[i];
            }
        }
        return max;   
    }
    T lowestMarks()const{
        T min=Marks[0];
        for (int i = 0; i < 5; i++)
        {
            if(Marks[i]<min){
                min=Marks[i];
            }
        }
        return min;   
    }
};

int main(){
    cout<<"Integer Array : \n";
    Result <int>r1;
    cout<<"Total Marks : "<<r1.totalMarks()<<"\n";
    cout<<"Average Marks : "<<r1.avgMarks()<<"\n";
    cout<<"Highest Marks : "<<r1.highestMarks()<<"\n";
    cout<<"Lowest Marks : "<<r1.lowestMarks()<<"\n";
    cout<<"--------------------------\n";

    cout<<"Floating Point Number Array : \n";
    Result <float>r2;
    cout<<"Total Marks : "<<r2.totalMarks()<<"\n";
    cout<<"Average Marks : "<<r2.avgMarks()<<"\n";
    cout<<"Highest Marks : "<<r2.highestMarks()<<"\n";
    cout<<"Lowest Marks : "<<r2.lowestMarks()<<"\n";

    return 0;
}