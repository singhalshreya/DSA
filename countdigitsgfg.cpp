#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int evenlydivides(int N){
 long double count =0;
 int num = N;
 while(N!=0){
    int k= N%10;
    if(k!=0 && num%k==0 ){
        count++;
    }
    N = N/10; 
 }
 return count;
// TC = O(n) where n=no of digits
// SC = O(1)
}
int main(){
    int N;
    cout<<"Enter the no:";
    cin>>N;
    cout<<evenlydivides(N)<<endl;
    
}