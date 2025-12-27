#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Size can't be zero or negative" << endl;
        return 0;
    }

    int arr[n];
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    // Take values of array
    for (int i = 0; i < arrSize; i++)
    {
        cout << "value: " << i + 1 << " = ";
        cin >> arr[i];
    }
    int max = arr[0], min = arr[0], indexMax = 0, indexMin = 0;

    for (int i = 0; i < arrSize; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            indexMin = i;
        }
        if (max < arr[i])
        {
            max = arr[i];
            indexMax = i;
        }
    }

    cout << "Max = " << max << "\tat:" << indexMax << endl
         << "Min = " << min << "\tat:" << indexMin << endl;
    return 0;
}