// Given an array Arr of size N containing positive integers. Find the maximum sum of a subsequence such that no two numbers in the sequence should be adjacent in the array.

// Example 1:

// Input:
// N = 6
// Arr[] = {5, 5, 10, 100, 10, 5}
// Output: 110
// Explanation: If you take indices 0, 3
// and 5, then Arr[0]+Arr[3]+Arr[5] =
// 5+100+5 = 110.

#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int helper(int index, int *arr){
	    if(index == 0){
	        return arr[index];
	    }
	    if(index<0){
	        return 0;
	    }
	    int pick = arr[index] + helper(index-2, arr);
	    int notpick = helper(index-1, arr);
	    return max(pick, notpick);
	}

    // memoization
int helper2(int index, int *arr, vector<int> &dp){
	    if(index == 0){
	        return arr[index];
	    }
	    if(index<0){
	        return 0;
	    }
        if(dp[index] !=-1){
            return dp[index];
        }
	    int pick = arr[index] + helper2(index-2, arr, dp);
	    int notpick = helper2(index-1, arr, dp);
	    return dp[index] = max(pick, notpick);
	}
	
	
	int findMaxSum(int *arr, int n, vector<int> &dp) {
	    // recursive
	    return helper2(n-1, arr, dp);    
	}

    int main(){
        int n;
        cin>>n;
        int *arr = new int(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int> dp(n+1,-1);
        cout<<findMaxSum(arr, n, dp);

        // tabulation
    }