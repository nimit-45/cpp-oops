#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter student marks: ";
    cin >> marks;
    
    try {
        if (marks < 0 || marks > 100) 
            throw "Invalid Marks! Marks should be between 0 and 100.";
        cout << "Marks recorded: " << marks << endl;
    } catch (const char* msg) {
        cout << msg << endl;
    }
    return 0;
}