#include<iostream>
#include<string>
using namespace std;
class Book{
    public:
    int BookID;
    string Title;
    int No_Copies;
    void setDetails(){
        cout<<"Enter Book ID : ";
        cin>>BookID;
        cout<<"Enter Book Title : ";
        getline(cin>>ws,Title);
        cout<<"Enter Number of Copies : ";
        cin>>No_Copies;
    }
    void show(){
        cout<<"Book Details : \n";
        cout<<"Book ID = "<<BookID<<"\n";
        cout<<"Book Title = "<<Title<<"\n";
        cout<<"Number of Copies = "<<No_Copies<<"\n";
        cout<<"------------------------\n";

    }
    void exchange(Book &other){
        int temp;
        temp=BookID;
        BookID=other.BookID;
        other.BookID=temp;

        string temp1;
        temp1=Title;
        Title=other.Title;
        other.Title=temp1;

        int temp2;
        temp2=No_Copies;
        No_Copies=other.No_Copies;
        other.No_Copies=temp2;

    }  
};
Book moreCopies(Book &b1,Book &b2){ // Passing by Reference avoids unecessary copies of Book objects and reduces memory usage...
    if(b1.No_Copies>=b2.No_Copies){
        return b1;
    }
    return b2;
}
int main(){
    Book b1,b2,b3;
    b1.setDetails();
    b2.setDetails();
    cout<<"\nDetails of Book 1 before exchange :\n ";
    b1.show();
    cout<<"Details of Book 2 before exchange :\n ";
    b2.show();
    b1.exchange(b2);
    cout<<"Details of Book 1 after exchange :\n ";
    b1.show();
    cout<<"Details of Book 2 after exchange :\n ";
    b2.show();
    b3=moreCopies(b1,b2);
    cout<<"Book ID of Book having more Copies = "<<b3.BookID<<" titled as "<<b3.Title<<" has "<<b3.No_Copies<<" Copies \n";
    return 0;

}