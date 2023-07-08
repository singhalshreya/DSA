// Given an integer array nums, find the 
// subarray
//  with the largest sum, and return its sum.
// Example 1:

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: The subarray [4,-1,2,1] has the largest sum 6.


// Kadane's Algorithm
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
        int sum =0;
        int maxi = INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            if(sum>maxi){
                maxi = sum;
            }
            if(sum<0){
                sum = 0;
            }
        }
        return maxi;
    }

int main(){
    int n,a;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>a;
        nums.push_back(a);
        }
    cout<<maxSubArray(nums);    
    return 0;
    }