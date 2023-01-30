#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// iterative
int gcd(int num1, int num2){
    int gcdf=1;
    for(int i=1;i<=min(num1,num2);i++){
        if(num1%i ==0 && num2%i == 0){
                gcdf = i;
        }
    }
return gcdf;
}

// recusion
int gcd1(int num1,int num2){
  
}

int main(){
    int num1,num2;
    cout<<"Enter num1 and num2: ";
    cin>>num1>>num2;
    cout<<gcd(num1,num2);
}