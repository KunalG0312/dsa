#include <iostream>
using namespace std;

// given a value
// check if sum of three numbers in the array is equal to the given value

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int value;
    cout << "Enter a value : ";
    cin >> value;

    try
    {
        int count = 0;
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                for (int k = j + 1; k < size; k++)
                {
                    if (arr[i] + arr[j] + arr[k] == value)
                    {
                        cout << "Sum of " << arr[i] << " " << arr[j] << " " << arr[k] << " results in " << value << endl;
                        count++;
                    }
                }
            }
        }
        if(count == 0){
            throw 505;
        }
    }

    catch(...){
        cout<<"Triplet not present";
    }
}