#include<iostream> 
#include<vector>
using namespace std;

// Solve by brute force O(n2)
vector<int> pairSum(vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (nums[i]+nums[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}


// Solved by whatever lol! But optimized O(n)
vector<int> pairSumOptim1(vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();
    int i = 0, j = n-1;

    while (i < j) {
        int pairSum = nums[i] + nums[j];
        if (pairSum > target) j--;
        if (pairSum < target) i++;
        if (pairSum == target) {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = pairSum(nums, target);
    cout << "By brute force\n"<< ans[0] << ", " << ans[1] << endl;
    
    vector<int> ans1 = pairSumOptim1(nums, target);
    cout << "By optimized algorithm\n"<< ans1[0] << ", " << ans1[1] << endl;
    
    return 0;
}