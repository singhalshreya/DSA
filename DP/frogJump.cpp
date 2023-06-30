// There is a frog on the '1st' step of an 'N' stairs long staircase. The frog wants to reach the 'Nth' stair. 'HEIGHT[i]' is the height of the '(i+1)th' stair.If Frog jumps from 'ith' to 'jth' stair, the energy lost in the jump is given by absolute value of ( HEIGHT[i-1] - HEIGHT[j-1] ). If the Frog is on 'ith' staircase, he can jump either to '(i+1)th' stair or to '(i+2)th' stair. Your task is to find the minimum total energy used by the frog to reach from '1st' stair to 'Nth' stair.

// For Example
// If the given ‘HEIGHT’ array is [10,20,30,10], the answer 20 as the frog can jump from 1st stair to 2nd stair (|20-10| = 10 energy lost) and then a jump from 2nd stair to last stair (|10-20| = 10 energy lost). So, the total energy lost is 20.

#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int f(int index, vector<int> &heights,vector<int> &dp ){
    // recursion to memoization
    if(index==0){
        return 0;
    }
    if(dp[index] != -1){
        return dp[index];
    }
    int e1 = f(index-1, heights, dp) + abs(heights[index] - heights[index-1]);
      int e2 = INT_MAX; 
      if(index>1){
           e2 = f(index-2, heights, dp) + abs(heights[index] - heights[index-2]);
      }  
      return dp[index] = min(e1,e2);
}

int frogJump(int n, vector<int> &heights)
{
    // recursive call for helper function
    // vector<int> dp(n+1,-1);
    // return f(n-1, heights, dp);

    // Tabulation
    vector<int> dp(n,0);
    dp[0] = 0;
    
    for(int i=1;i<n;i++){
      int e1 = dp[i-1] + abs(heights[i] - heights[i-1]);
      int e2 = INT_MAX; 
      if(i>1){
           e2 = dp[i-2] + abs(heights[i] - heights[i-2]);
      }  
      dp[i] = min(e1,e2);
    }
    return dp[n-1];
}

int main(){
     int n,a;
     cin>>n;
     vector<int> heights;
     for(int i=0;i<n;i++){
        cin>>a;
        heights.push_back(a);
     }
     cout<<frogJump(n, heights);
}