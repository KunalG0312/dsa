#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {0, 2, 1, 1, 0, 2, 1, 0, 2, 1};
    int left = 0;
    int right = 9;
    int mid = 0;

    while (mid < right)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[left], arr[mid]);
            left++;
            mid++;
            break;

        case 1:
            mid++;
            break;

        case 2:
            swap(arr[mid], arr[right]);
            right--;
            break;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}