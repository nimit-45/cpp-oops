#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Array Size : ";
    cin >> n;
    int arr[n];
    cout << "Enter Array Elemnts : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int num, count = 0;
    cout << "Enter Element to Check : ";
    cin >> num;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
    }
    cout << "Occurrences = " << count;
    return 0;
}