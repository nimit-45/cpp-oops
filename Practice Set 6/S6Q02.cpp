#include <iostream>
#include <cmath>
#include <exception>
using namespace std;

class NegativeNumberException : public exception {
public:
    const char* what() const noexcept override {
        return "Error: Square root of a negative number cannot be calculated.";
    }
};

int main() {
    double num;
    cout << "Enter a number: ";
    cin >> num;
    
    try {
        if (num < 0) throw NegativeNumberException();
        cout << "Square root: " << sqrt(num) << endl;
    } catch (const NegativeNumberException& e) {
        cout << e.what() << endl;
    }
    return 0;
}