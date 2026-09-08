#include<iostream>
using namespace std;
class Distance{
    public:
    int Feet;
    int Inches;
    void setDetails(){
        cout<<"Enter Feets : ";
        cin>>Feet;
        cout<<"Enter Inches : ";
        cin>>Inches;
    }
    Distance Add(Distance d2){
        Distance d3;
        d3.Feet=Feet+d2.Feet;
        d3.Inches=Inches+d2.Inches;
        if(d3.Inches>=12){
            d3.Feet++;
            d3.Inches=d3.Inches-12;
            //d3.Feet+=d3.Inches/12;
            //d3.Inches=d3.Inches%12;
        }
        return d3;
    }
};
int main(){
    Distance d1,d2,d3;
    d1.setDetails();
    d2.setDetails();
    d3=d1.Add(d2);
    cout<<"Sum is = "<<d3.Feet<<" ft "<<d3.Inches<<" in";
    return 0;

}