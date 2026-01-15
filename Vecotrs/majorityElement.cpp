#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Note: Majority element here means the number which satisfy the condition frequency > n/2; n=size of array

// Find majority element by brute force O(n2)
int bruteForce(vector<int> vec) {
    for (int val: vec) {
        int freq = 0;
        for (int num: vec) {
            if (num == val) freq++;
        }
        if (freq > vec.size()/2) {
            cout << val;
            return 0;
        };
    }
    return 0;
}


// Little optimization by sorting O(nlogn + n)
int optimSolution(vector<int> vec) {
    int n = vec.size();
    sort(vec.begin(), vec.end());
    int freq = 1, ans=vec[0];

    for (int i=1; i<n; i++) {
        if (vec[i]==vec[i-1]) {
            freq++;
        } else {
            freq = 1;
            ans = vec[i];
        }

        if (freq > n/2) {
            cout << ans;
            return ans;
        }
    }
    return ans;
}

// Moore's voting algorithm O(n)
int mooreAlgo(vector<int> vec) {
    int freq = 0, ans = 0;

    for (int i=0; i<vec.size(); i++) {
        if (freq == 0) ans = vec[i];
        if (ans == vec[i]) {
            freq++;
        } else {
            freq--;
        }
    }
    cout << ans;
    return ans;
}

int main() {
    vector<int> vec = {8, 8, 3, 4, 8, 8};

    // bruteForce(vec);
    // optimSolution(vec);
    mooreAlgo(vec);
    return 0;
}