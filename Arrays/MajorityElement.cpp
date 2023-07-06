// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
// Example 1:

// Input: nums = [3,2,3]
// Output: 3

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

 int majorityElement(int nums[], int size)
    {
          map<int,int>m;
        for(int i = 0; i<size ;i++){
            m[nums[i]]++;
        }
        
        for(auto i: m){
            if(i.second > size/2) return i.first;
        }
        return -1;
    }

    int main(){
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
        }
    cout<<majorityElement(nums,n)<<endl;    
    return 0;
    }