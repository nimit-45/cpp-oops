#include<iostream>
#include<string>
using namespace std;
class Product{
    public:
    string Product_Name;
    double Price;
    int Quantity;

    Product(){
        Product_Name="Unknown";
        Price=0;
        Quantity=0;
    }
    void setValue(){
        cout<<"Enter Product Name : ";
        getline(cin>>ws,Product_Name);
        cout<<"Enter Price : ";
        cin>>Price;
        cout<<"Enter Quantity : ";
        cin>>Quantity;
        cout<<"-----------------------------\n";
    }
    Product combine(const Product &p2){
        Product p3;
        p3.Product_Name="Combined Inventory";
        p3.Quantity=Quantity+p2.Quantity;
        p3.Price=(Price*Quantity+p2.Price*p2.Quantity)/p3.Quantity; //Unit price of combined product..
        return p3;
    }
};
Product HigherValue(const Product &p1,const Product &p2){
    if(p1.Price*p1.Quantity>=p2.Price*p2.Quantity){
        return p1;
    }
    return p2;
}
int main(){
    Product p1,p2,p3,p4;
    p1.setValue();p2.setValue();
    p3=p1.combine(p2);
    cout<<"Combined Unit Price = "<<p3.Price<<" Combined Quantity = "<<p3.Quantity<<"\n";
    p4=HigherValue(p1,p2);
    cout<<"Higher Value Product = "<<p4.Product_Name<<" with Total Value = "<<p4.Price*p4.Quantity;
    return 0;
}