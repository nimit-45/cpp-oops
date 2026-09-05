#include<iostream>
#include<string>
using namespace std;
class Library{
    string title;
    string author;
    public:
    Library(){
        cout<<"Enter Title : ";
        getline(cin,title);
        cout<<"Enter Author Name : ";
        getline(cin,author);
        cout<<"------------------------\n";
    }
    bool searchBook(string s){
        return s==title;
    }
    void displayDetails(){
        cout<<"Title = "<<title<<"\n";
        cout<<"Author = "<<author<<"\n";
    }   
};
int main(){
    Library arr[10];
    string search;
    int found=0;
    cout<<"Enter Title to Search: ";
    getline(cin,search);
    cout<<"Matching Results : \n";
    for(int i=0;i<10;i++){
        if(arr[i].searchBook(search)){
            found =1;
            cout<<"-------------------------\n";
            arr[i].displayDetails();
        }
    }
    if (found==0){
        cout<<"Book Not Found !!!";
    }
    return 0;
}
