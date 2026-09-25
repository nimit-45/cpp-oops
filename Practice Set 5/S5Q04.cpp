#include <iostream>
#include <string>
using namespace std;
class Vehicle{
    string registrationNo;
    string companyName;
    public:
    Vehicle(){
        cout<<"Enter Registration Number : ";
        getline(cin >> ws, registrationNo);
        cout<<"Enter Vehicle Company Name : ";
        getline(cin >> ws, companyName);
    }
    void display()const{
        cout<<"\nVehicle Details are.....\n";
        cout<<"Registration Number : "<<registrationNo<<"\n";
        cout<<"Vehicle Company Name : "<<companyName<<"\n";
    }
};

class Car : public Vehicle{
    string fuelType;
    int engineCapacity;
    public:
    Car(){
        cout<<"Enter Car Fuel Type : ";
        getline(cin>>ws,fuelType);
        cout<<"Enter Engine Capacity : ";
        cin>>engineCapacity;
    }
    void display()const{
        Vehicle::display();
        cout<<"Car Fuel Type : "<<fuelType<<"\n";
        cout<<"Car Engine Capacity : "<<engineCapacity<<"\n";
        cout<<"---------------------------\n";
    }
};

class Bike : public Vehicle{
    string fuelType;
    int engineCapacity;
    public:
    Bike(){
        cout<<"Enter Bike Fuel Type : ";
        getline(cin>>ws,fuelType);
        cout<<"Enter Engine Capacity : ";
        cin>>engineCapacity;
    }
    void display()const{
        Vehicle::display();
        cout<<"Bike Fuel Type : "<<fuelType<<"\n";
        cout<<"Bike Engine Capacity : "<<engineCapacity<<"\n";
        cout<<"---------------------------\n";
    }
};

int main(){
    Car c1;
    c1.display();
    Bike b1;
    b1.display();
    return 0;
}