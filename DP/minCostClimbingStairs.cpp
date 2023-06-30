// Given an array of integers cost[] of length N, where cost[i] is the cost of the ith step on a staircase. Once the cost is paid, you can either climb one or two steps.
// You can either start from the step with index 0, or the step with index 1.
// Return the minimum cost to reach the top of the floor.
// Input:
// N = 10
// arr[] = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1}
// Output:
// 6
// Explanation:
// Cheapest option is to start on cost[0], 
// and only step on 1s, skipping cost[3].

#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

// memoization
int helper(int index,int N, vector<int> &cost, vector<int> &dp){
      if(index>=N){
          return 0;
      }
       
      if(dp[index] !=-1){
          return dp[index];
      }
      int c1 = cost[index] + helper(index+1,N, cost, dp);
      int c2 = cost[index] + helper(index+2,N, cost, dp);
      
      return dp[index] = min(c1,c2);
    //   return cost[index] + min(helper(index-1, cost), helper(index-2, cost));
      
  }
  
    int minCostClimbingStairs(vector<int>&cost ,int N) {
        //Write your code here
        vector<int> dp(N+1,-1);
        int ans1 =  helper(0,N, cost, dp);
        int ans2 =  helper(1,N, cost, dp);
        return min(ans1, ans2);
    }

    int tab(int N, vector<int> &cost){
    // Tabulation
        int dpp[N];
        dpp[0] = cost[0];
        dpp[1] = cost[1];
        for(int i=2;i<N;i++){
            dpp[i] = cost[i] + min(dpp[i-1], dpp[i-2]);
        }
        return dpp[N-1] = min(dpp[N-1], dpp[N-2]);

}

    int main(){
        int N;
        cin>>N;
        vector<int> cost(N);
        for(int i=0;i<N;i++){
            cin>>cost[i];
        }
        cout<<minCostClimbingStairs(cost, N);

        cout<<""<<endl;
        cout<<tab(N, cost);

    }