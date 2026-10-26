#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream src("source.txt");

    if (!src) {
        cerr << "Error: Could not open source.txt." << '\n';
        return 1;
    }

    ofstream dest("destination.txt");

    if (!dest) {
        cerr << "Error: Could not open destination.txt." << '\n';
        return 1;
    }

    char c;
    while (src.get(c)) {
        dest.put(c);
    }

    dest.close();

    if (!dest) {
        cerr << "Error: File copying failed." << '\n';
        return 1;
    }

    cout << "File copied successfully." << '\n';

    src.close();
    return 0;
}