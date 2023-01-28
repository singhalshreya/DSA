#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int reverseno(int N){
  int rev = 0;
  while(N!=0){
    int k=N%10;
    rev = rev*10 + k;
    N=N/10;
  }
 return rev;
// TC = O(n) where n=no of digits
// SC = O(1)
}
int reverse(int x) {
//    leetcode ques 
// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
int rev =0;
while(x!=0){
    if(rev<INT_MIN || rev>INT_MAX){
        return 0;
    }
    else{
        rev = rev*10 + (x%10);
        x = x/10;
    }
}
// TC = O(n) where n=no of digits
// SC = O(1)
    }

int main(){
    int N;
    cout<<"Enter the no:";
    cin>>N;
    cout<<reverseno(N)<<endl;
}