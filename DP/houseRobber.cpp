// You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed. All houses at this place are arranged in a circle. That means the first house is the neighbor of the last one. Meanwhile, adjacent houses have a security system connected, and it will automatically contact the police if two adjacent houses were broken into on the same night.

// Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.
// Example 1:

// Input: nums = [2,3,2]
// Output: 3
// Explanation: You cannot rob house 1 (money = 2) and then rob house 3 (money = 2), because they are adjacent houses.

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int rob(vector<int>& nums) {
        int n = nums.size();
    vector<int> dp(n);
    if(n == 1) {
        return nums[0];
    }
    if(n == 2) {
        return max(nums[0], nums[1]);
        }

    dp[0] = 0;
    dp[1] = 0;
    for(int i = 2; i < n - 1; i++){
        dp[i] = max(dp[i-1], nums[i] + dp[i-2]);
    }
    int ans = nums[0] + dp[n-2];
    // and if you include last house then don't include the first house.
    dp[0] = 0;
    dp[1] = nums[1];
    for(int i = 2; i < n; i++){
        dp[i] = max(dp[i-1], nums[i] + dp[i-2]);
    }
    ans = max(ans, dp[n-1]);
    return ans;
}

int main(){
 int n,a;
 cin>>n;
 vector<int> nums(n);
 for(int i=0;i<n;i++){
    cin>>a;
    nums.push_back(a);
 }
cout<<rob(nums);
}