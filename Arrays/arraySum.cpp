#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int i = 0;
    int sum = 0;
    long long mul = 1;

    while(i<10){
        sum+=arr[i];
        mul*=arr[i];
        i++;
    }
    cout << "Sum = " << sum << endl
         << "Product = " << mul << endl;
    return 0;
} 