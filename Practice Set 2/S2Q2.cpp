#include<iostream>
using namespace std;
class Rectangle{
    float length;
    float breadth;
    float Area;
    public:
    void input(){
        cout<<"Enter Length : ";
        cin>>length;
        cout<<"Enter Breadth : ";
        cin>>breadth;
         
    }
    void calculateArea(){
        Area=length*breadth;
    }
    void displayArea(){
        cout<<"The Area of Rectangle = "<<Area;
    }
};
int main(){
    Rectangle r1;
    r1.input();
    r1.calculateArea();
    r1.displayArea();
    return 0;
}