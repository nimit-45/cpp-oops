#include<iostream>
#include<string>
using namespace std;
class Book{
    string title;
    string author;
    public:
    Book(string t,string a){
        title=t;
        author=a;
    }
    void Display_Details(){
        cout<<"Book Details are ...\n";
        cout<<"Title : "<<title<<"\n";
        cout<<"Author : "<<author<<"\n";
    }
};
int main (){
    string t,a;
    cout<<"Enter Title : ";
    getline(cin,t);
    cout<<"Enter Author : ";
    getline(cin,a);
    Book b1(t,a);
    b1.Display_Details();
    return 0;  
}