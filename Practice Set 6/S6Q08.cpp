#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    int rollno, marks;
    string name;

    ofstream file("students.txt");

    if (!file) {
        cerr << "Error: Could not open file." << '\n';
        return 1;
    }

    for (int i = 0; i < 2; i++) {
        cout << "Enter Roll Number: ";
        cin >> rollno;

        cout << "Enter Name: ";
        getline(cin >> ws, name);

        cout << "Enter Marks: ";
        cin >> marks;

        file << rollno << " " << name << " " << marks << '\n';
    }

    file.close();
    cout << "Details written successfully." << '\n';
    return 0;
}