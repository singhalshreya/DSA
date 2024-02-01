#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Approach 1:Linera Search Brute force
// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {
//     int first = -1, last = -1;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == k) {
//             if (first == -1) first = i;
//             last = i;
//         }
//     }
//     return {first, last};
// }

// Approach 2: Lower and Upper bound
// TC = O(2*logn)
// SC = O(n)
    // vector<int> searchRange(vector<int>& nums, int target) {
    //     vector<int> ans(2,-1);
    // if(nums.size()==0)return ans;
    // int t1=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
    // int t2=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
    // if(t1==t2)return ans;
    // cout<<t1<<t2;
    // ans[0]=t1;
    // ans[1]=t2-1;
    // return ans;
    // }

    // optimal approach - binary search
     

    vector<int> searchRange(vector<int>& nums, int target) {

    }