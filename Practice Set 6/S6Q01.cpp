#include <iostream>
using namespace std;
int main()
{
    double num, den;
    cout << "Enter Two Numbers : ";
    cin >> num >> den;
    try
    {
        if (den == 0)
            throw "Error: Division by zero is not allowed.";
        cout << "Result: " << num / den << '\n';
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }
    return 0;
}