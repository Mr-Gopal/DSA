#include<iostream>
#include<vector>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6}; // Array Pointer. Type - constant poitner
    cout<<arr<<" -> "<<*arr<<endl; // Points to arr[0]

    int b = 304;
    // arr = &b; throws error! since it's a constant pointer

    return 0;
}
