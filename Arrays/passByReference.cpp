#include <iostream>
using namespace std;

int changeArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] *= arr[i];
    }
}

// pass by value implies sending a copy of original
// pass by reference meaning sending the original data by it's memory address

int main()
{
    int arr[4] = {1, 2, 3, 4}, size = 4;

    cout << "print before changing!" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }

    cout << "\nprint after changing!" << endl;
    changeArr(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}