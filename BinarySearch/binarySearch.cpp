#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int target) {
    int st=0, end=arr.size()-1;

    while(st <= end) {
        int mid = (st+end)/2;
        if (target > arr[mid]) {
            st = mid+1;
        } else if(target < arr[mid]) {
            end = mid-1;
        } else {
            return mid;
        }
    }
    return -1;
}

// worst case: st = INT_Min, end = INT_MAX => st+end >> INT_MAX
int binarySearchOptim(vector<int> arr, int target) {
    int st = 0, end = arr.size() - 1;

    while (st <= end) {
        int mid = st + (end - st)/2; 
        if (target > arr[mid]) {
            st = mid+1;
        } else if(target < arr[mid]) {
            end = mid-1;
        } else {
            return mid;
        }
    }
    return -1;
}

int main() {
    vector<int> arr1 = {-1, 0, 3, 4, 5, 8, 11};
    cout<<binarySearch(arr1, 11)<<endl;
    
    vector<int> arr2 = {-1, 0, 3, 4, 5, 8};
    cout<<binarySearch(arr2, -1)<<endl;
    return 0;
}