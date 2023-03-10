#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;

// stack method
int cno(int N){
    stack<int> st;
    int count=0, num = N;
    while(N!=0){
        int digit = num%10;
        st.push(digit);
        num /=10;
    }
    while(!st.empty()){
        if(N%st.top()==0){
            count++;
        }
        st.pop();
    }
    return count;
}

// int evenlydivides(int N){
//  long double count =0;
//  int num = N;
//  while(N!=0){
//     int k= N%10;
//     if(k!=0 && num%k==0 ){
//         count++;
//     }
//     N = N/10; 
//  }
//  return count;
// // TC = O(n) where n=no of digits
// // SC = O(1)
// }
int main(){
    int N;
    cout<<"Enter the no:";
    cin>>N;
    // cout<<evenlydivides(N)<<endl;
    cout<<cno(N)<<endl;
}