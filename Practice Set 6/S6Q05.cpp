#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int arr[10];

    cout << "Enter 10 Array Elements:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Element " << i + 1 << " : ";
        cin >> arr[i];
    }

    int index;
    cout << "Enter an index (0-9): ";
    cin >> index;

    try {
        if (index < 0 || index >= 10)
            throw out_of_range("Error: Array Index Out of Bounds.");

        cout << "Element at index " << index
             << " is " << arr[index] << '\n';
    }
    catch (const out_of_range& e) {
        cout << e.what() << '\n';
    }

    return 0;
}