#include<iostream>
#include<string>
using namespace std;
class Text{
    string str;
    public:
    Text(string s){
        str=s;
    }
    void Calculate_Length(){
        int i=0,count=0;
        while(str[i]!='\0'){
            count++;
            i++;
        }
        cout<<"Length of String : "<<count;
    }
};
int main(){
    string s;
    cout<<"Enter String : ";
    getline(cin,s);
    Text T1(s);
    T1.Calculate_Length();
    return 0;
}