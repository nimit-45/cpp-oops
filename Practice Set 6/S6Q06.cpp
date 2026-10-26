#include <iostream>
#include <exception>
using namespace std;

class AgeException : public exception {
public:
    const char* what() const noexcept override {
        return "Exception: Not eligible for voting.";
    }
};

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;
    
    try {
        if (age < 18) throw AgeException();
        cout << "Eligible for voting." << endl;
    } catch (const AgeException& e) {
        cout << e.what() << endl;
    }
    return 0;
}