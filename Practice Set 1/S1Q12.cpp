#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Array Size : ";
    cin >> n;
    if (n < 2)
    {
        cout << "Atleast 2 Elements are Required !! ";
        return 0;
    }
    int arr[n];
    cout << "Enter Array Elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int largest, Slargest;
    if (arr[0] > arr[1])
    {
        largest = arr[0];
        Slargest = arr[1];
    }
    else
    {
        largest = arr[1];
        Slargest = arr[0];
    }
    for (int i = 2; i < n; i++)
    {
        if (arr[i] > largest)
        {
            Slargest = largest;
            largest = arr[i];
        }
        else
        {
            if (arr[i] > Slargest)
            {
                Slargest = arr[i];
            }
        }
    }
    cout << "Second Largest Element : " << Slargest;
    return 0;
}