#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool palindrome(int num){
    long rev = 0, m=0;
    m = num;
    if(num<0){
        return false;
    }
    while(m!=0){
        rev = rev*10 + (m%10);
        m/=10;
    }
  if(num == rev){
    return true;
  }
  else{
    return false;
  }
}
// TC : O(logN) where N is total digits in input
int main(){
  int x;  
  cout<<"Enter no: ";
  cin>>x;
cout<<palindrome(x)<<endl;
}
