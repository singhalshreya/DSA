#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int countdigits(int N){
 int count=0;
 while(N!=0){
    N = N/10;
    count++;
 }
 return count;
// TC = O(n) where n=no of digits
// SC = O(1)
}

// log method
int countnoofdigits(int N){
int count = floor(log10(N) +1);
return count;
// TC = O(1) where n = no of digits
// SC = O(1)
}

// convert to string method
int count_digits(int N){
string y = to_string(N);
// to_string directly converts an int to string
return y.length();
// TC = O(1) where n = no of digits
// SC = O(1)
}

int main(){
    int N;
    cout<<"Enter the no:";
    cin>>N;
    cout<<countdigits(N)<<endl;
    cout<<countnoofdigits(N)<<endl;
    cout<<count_digits(N)<<endl;
}