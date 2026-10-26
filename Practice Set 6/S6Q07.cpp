#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Enter calculation (num 1 operator num 2): ";
    cin >> a >> op >> b;

    try {
        if (op != '+' && op != '-' && op != '*' && op != '/')
            throw op;

        if (op == '/' && b == 0)
            throw 0;

        if (op == '+')
            cout << "Result: " << a + b << '\n';
        else if (op == '-')
            cout << "Result: " << a - b << '\n';
        else if (op == '*')
            cout << "Result: " << a * b << '\n';
        else if (op == '/')
            cout << "Result: " << a / b << '\n';
    }
    catch (const int e) {
        cout << "Division by Zero Error." << '\n';
    }
    catch (const char e) {
        cout << "Invalid Operator Error." << '\n';
    }
    return 0;
}