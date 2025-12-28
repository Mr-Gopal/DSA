#include <iostream>
using namespace std;

int reverseArray(int arr[], int size) {
    if(size%2==0) {
        for(int i=0; i<=size/2; i++) {
            swap(arr[i], arr[size-1-i]); 
        }
    } else {
        for(int i=0; i<=(size-1)/2; i++) {
            swap(arr[i], arr[size-1-i]);
        }
    }
    return 0;
}


int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    if (n<=0){
        cout << "Invalid input!";
        return 0;
    }

    int arr[n];

    // take value for array
    for (int i=0; i<n; i++) {
        cout << "Value " << i+1 << " = ";
        cin >> arr[i];
    }


    cout << "Your array" << endl;
    for(int i=0; i<n; i++) cout << arr[i] << " ";

    reverseArray(arr, n);

    cout << "\nReversed array" << endl;
    for(int i=0; i<n; i++) cout << arr[i] << " ";

    return 0;
}