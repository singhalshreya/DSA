#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,sum=0;
    cin>>n;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum += i;
        }
    }
    if(n==sum){
        cout<<"Perfect no"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}