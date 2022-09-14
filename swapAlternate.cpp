#include <iostream>
using namespace std;

// swapping alternate numbers in an array

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array : ";
    cin >> n;
    int arr[100];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printArray(arr, n);
    cout << endl;

    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            swap(arr[i], arr[i + 1]);
            i++;
        }
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            swap(arr[i], arr[i + 1]);
            i++;
        }
    }
    printArray(arr, n);
}