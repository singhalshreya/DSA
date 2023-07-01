// There are n stones and an array of heights and Geek is standing at stone 1 and can jump to one of the following: Stone i+1, i+2, ... i+k stone and cost will be [hi-hj] is incurred, where j is the stone to land on. Find the minimum possible total cost incurred before the Geek reaches Stone N.

// Example 1:
// Input:
// n = 5, k = 3
// heights = {10, 30, 40, 50, 20}
// Output:
// 30
// Explanation:
// Geek will follow the path 1->2->5, the total cost 
// would be | 10-30| + |30-20| = 30, which is minimum

#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int minimizeCost(vector<int>& height, int n, int k) {
        // Tabulation
        vector<int> dp(n, -1);
        dp[0] = 0;
        
        for(int index=1;index<n;index++){
             int min_cost = INT_MAX;
             for(int j=1;j<=k;j++){
                 int cost;
                 if(index - j>=0){
                  cost = dp[index - j] + abs(height[index] - height[index-j]);
                 }
                 min_cost = min(cost, min_cost);
             }
             dp[index] = min_cost; 
        }
        return dp[n-1];
    }

    
int main(){
     int n,a,k;
     cin>>n;
     cin>>k;
     vector<int> height;
     for(int i=0;i<n;i++){
        cin>>a;
        height.push_back(a);
     }
     cout<<minimizeCost(height, n, k);
}