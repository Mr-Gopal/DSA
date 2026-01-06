#include<iostream> 
using namespace std;

int main() {
    int n = 7;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    int maxSum = INT32_MIN;

    // Solve by brute force O(n2)
    for(int st=0; st<n; st++) {
        int currentSum = 0;
        for(int end=st; end<n; end++) {
            currentSum += arr[end];
            maxSum = max(currentSum, maxSum);
        }
    }

    // Solve by Kadane's Algorithm O(n)
    int s = 7;
    int arr2[7] = {3, -4, 5, 4, -1, 7, -8};
    int maxSum2 = INT32_MIN;
    int currentSum2 = 0;
    for (int i=0; i<s; i++) {
        currentSum2 += arr2[i];
        maxSum2 = max(currentSum2, maxSum2);
        if (currentSum2 < 0) currentSum2 = 0;
    }

    cout << "Max subarray sum by brute force = " << maxSum << endl;
    cout << "Max subarray sum by Kadane's Algorithm = " << maxSum2 << endl;
    return 0;
}