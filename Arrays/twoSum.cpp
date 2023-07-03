// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

// Example 1:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        
        for(int i=0;i<nums.size();i++){
            int ans = target - nums[i];
            if(map.find(ans) != map.end()){
                 return {map[ans], i};
            }
            map[nums[i]] = i;
        }
        
    return {-1,-1};
    }

int main(){
    int n,a, target;
    cin>>n;
    cin>>target;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>a;
        nums.push_back(a);
    }
    twoSum(nums, target);

}

