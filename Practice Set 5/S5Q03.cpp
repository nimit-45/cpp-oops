#include <iostream>
#include <string>
using namespace std;
class Book{
    string title;
    string author_name;
    public:
    Book(){
        cout<<"Enter Book Title : ";
        getline(cin>>ws,title);
        cout<<"Enter Book Author Name : ";
        getline(cin>>ws,author_name);
    }
    void display(){
        cout<<"Book Details : \n";
        cout<<"Book Title : "<<title<<"\n";
        cout<<"Book Author Name : "<<author_name<<"\n";
    }

};

class EBook : public Book{
    string file_size;
    string file_format;
    public:
    EBook(){
        cout<<"Enter File Size : ";
        getline(cin>>ws,file_size);
        cout<<"Enter File Format : ";
        getline(cin>>ws,file_format);
    } 
    void display(){
        Book::display();
        cout<<"EBook File Size : "<<file_size<<"\n";
        cout<<"EBook File Format : "<<file_format<<"\n";
        cout<<"---------------------------\n";
    } 
};
int main(){
    EBook arr[3];
    cout<<"Printing All Book Details ........\n\n";
    for (int i = 0; i < 3; i++)
    {
        arr[i].display();
    }  
    return 0;
}