#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// memoization  - Top Down approach
int fib(int n, int dp[]){
if(n<=1){
    return n;
 }
if(dp[n]!=-1){
return dp[n];
 }
return dp[n] = fib(n-1, dp) + fib(n-2, dp);

}

int main(){
int n;
cin>>n;
int dp[n+1];
memset(dp,-1, sizeof(dp));
cout<<fib(n,dp);


// Tabulation method - Bottom Up approach
int *memo = new int[n];
memo[0] = 0;
memo[1] = 1;

for(int i=2;i<n;i++){
memo[i] = memo[i-1] + memo[i-2];
}

cout<<"Nth fibonaaci number: "<<memo[n-1]<<endl;
return 0;
}

// Tabulation method: TC = O(N), SC = O(N)
