#include<iostream>
using namespace std;
class Rectangle{
    public:
    float Length;
    float Width;
    void setDetails(){
        cout<<"Enter Length : ";
        cin>>Length;
        cout<<"Enter Breadth : ";
        cin>>Width;
    }
    void compare(Rectangle r){
        if(Length*Width==r.Length*r.Width){
            cout<<"Both Rectangles have Equal Area..\n";    
        }
        else{
            cout<<"Areas are not Equal !!";
        }
    }
};
Rectangle add(Rectangle r1 , Rectangle r2){
    Rectangle r3;
    r3.Length=r1.Length+r2.Length;
    r3.Width=r1.Width+r2.Width;
    return r3;
}
int main(){
    Rectangle r1,r2,r3;
    r1.setDetails();
    r2.setDetails();
    r1.compare(r2);
    r3=add(r1,r2);
    cout<<"Combined Length = "<<r3.Length<<" Combined Width = "<<r3.Width;

}