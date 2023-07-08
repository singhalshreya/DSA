// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
// Example 1:
// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
       int maxPro = 0;
    int n = prices.size();
    int minPrice = INT_MAX;

    for (int i = 0; i <n; i++) {
        minPrice = min(minPrice, prices[i]);
        maxPro = max(maxPro, prices[i] - minPrice);
    }
    
    return maxPro;
    
        // Brute Force approach - TLE
    //    int maxdiff = 0;
    //     for(int i=0;i<prices.size();i++){            
    //         for(int j=i+1;j<prices.size();j++){
    //             if(prices[j]>prices[i]){
    //                 maxdiff = max(maxdiff, prices[j] - prices[i]);
    //             }
    //         }
    //     }
    //     return maxdiff;
    }

int main(){
    int n,a;
    cin>>n;
    vector<int> prices(n);
    for(int i=0;i<n;i++){
        cin>>a;
        prices.push_back(a);
    }
    maxProfit(prices);
    return 0;
    }

