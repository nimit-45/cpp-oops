#include<iostream>
#include<string>
using namespace std;
class Book{
    int bookid;
    string bookname;
    double price;
    public:
    static int count;
    Book(){
        cout<<"Enter Book ID : ";
        cin>>bookid;
        cout<<"Enter Book Name : ";
        getline(cin>>ws,bookname);
        cout<<"Enter Book Price : ";
        cin>>price;
        count++;
    }
    inline void Discount(){
        cout<<"Discounted Price = "<<price-.1*price<<"\n";
    }
    bool operator>(const Book &b){
        return price>b.price;
    }
    friend void Display(const Book &b2);
};
int Book::count=0;
void Display(const Book &b2){
    cout<<"Book Details are : \n";
    cout<<"Book ID = "<<b2.bookid<<"\n";
    cout<<"Book Name = "<<b2.bookname<<"\n";
    cout<<"Price = "<<b2.price<<"\n";
}

int main(){
    Book b1,b2;
    b1.Discount();
    if (b1 > b2) {
    cout << "Book 1 is Costlier\n";
    Display(b1);
    }
    else if (b2 > b1) {
    cout << "Book 2 is Costlier\n";
    Display(b2);
    }
    else {
    cout << "Both Books have the Same Price\n";
    }
    return 0;
}