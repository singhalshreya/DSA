// You are climbing a staircase. It takes n steps to reach the top.

// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
// Example 1:

// Input: n = 2
// Output: 2
// Explanation: There are two ways to climb to the top.
// 1. 1 step + 1 step
// 2. 2 steps


#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int climbStairs(int n) {
        // memoization
        int dp[n+1];
        memset(dp, -1, sizeof(dp));
    //     // if(n==0 || n==1){
    //     //     return 1;
    //     // }
    //     // return dp[n] =  climbStairs(n-1) + climbStairs(n-2); 

    //     // Tabulation
        dp[0] = 1;
        dp[1] = 1;

        for(int i= 2;i<=n;i++){
            dp[i] =   dp[i-1] +  dp[i-2];
        }
    return dp[n];
// recursive
        
    //     if(n==0 || n==1){
    //         return 1;
    //     }
    //     if(n==2){
    //         return n;
    //     }
    //     return climbStairs(n-1) + climbStairs(n-2); 
    }

int main(){
int n;
cin>>n;
cout<<climbStairs(n);
}