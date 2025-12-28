#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for (int i = 0; i < size; i++){
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int main(){
    int arr[] = {23, 92, 76, 34, 19, 87, 56, 32};

    int index = linearSearch(arr, 8, 100);
    if (!(index == -1))
        cout << "Target value = " << arr[index] << "\tAt index = " << index << endl;
    else
        cout << "Target not in array" << endl;

    return 0;
}