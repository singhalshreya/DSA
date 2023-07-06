// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

// You must solve this problem without using the library's sort function.
// Example 1:

// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

   void sortColors(int nums[], int n) {
        
        // better approach
       
        // int count_0 = 0, count_1 = 0, count_2 =0;
        // for(int i=0;i<n;i++){
        //     if(nums[i] == 0){
        //         count_0++;
        //     }
        //     else if(nums[i] == 1){
        //         count_1++;
        //     }
        //     else{
        //         count_2++;
        //     }
        // }
        // for(int i=0;i<count_0;i++){
        //     nums[i] = 0;
        // }
        // for(int i=count_0;i<count_0+count_1;i++){
        //     nums[i] = 1;
        // }
        // for(int i=count_0+count_1;i<n;i++){
        //     nums[i] = 2;
        // }

        // optimal - Dutch National Flag Algo
        int low = 0, mid = 0, high = n-1;
        while(mid<=high){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }  
            
    }

    int main(){
        int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
        }
    sortColors(nums, n);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
    }