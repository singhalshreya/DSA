// The Tribonacci sequence Tn is defined as follows: 

// T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.

// Given n, return the value of Tn.

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int tribonacci(int n, int dp[]) {
     if(n<=0){
            return 0;
        }
        if(n==1 || n==2){
          return 1;
      }
        if(dp[n] !=-1){
            return dp[n];
        }
        return dp[n] = tribonacci(n-1,dp) + tribonacci(n-2,dp) + tribonacci(n-3,dp);
        // tabulation
    //   int dp[n +1];
    //   dp[0] = 0;
    //   if(n==0){
    //       return 0;
    //   }
    //   if(n==1 || n==2){
    //       return 1;
    //   }
    //   dp[1] = 1;
    //   dp[2] = 1;

    //   for(int i=3;i<=n;i++){
    //       dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    //   } 
    //   return dp[n];
 }

    int main(){
        int n;
        cin>>n;
        int dp[n+1];
        memset(dp,-1, sizeof(dp));
        cout<<tribonacci(n,dp);
        return 0;
    }