#include<iostream>
#include<vector>
using namespace std;

int recursivebinarySearch(vector<int> arr, int target, int st, int end) {
    if (st <= end) {
        int mid = st + (end - st)/2;
        if (target > arr[mid]) {
            return recursivebinarySearch(arr, target, mid+1, end);
        } else if (target < arr[mid]){ 
            return recursivebinarySearch(arr, target, st, mid-1);
        } else {
            return mid;
        }
    }

    return -1;
}

int main() {
    vector<int> arr = {-1, -2, 0, 2, 5, 87, 7, 10};
    cout<<recursivebinarySearch(arr, 87, 0, 7)<<endl;
    cout<<recursivebinarySearch(arr, 8, 0, 7)<<endl;

    return 0;
}