#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int countn(int x){
    int count = floor(log10(x)+1);
    return count; 
}

bool armstrongno(int x){
int num = x,n=0,k=0;
int sum=0;
int y = countn(num);

while(x!=0){
     sum = sum + pow(x%10,y);
     x /=10;
}
 if(sum==num){
    return true;
        }
 else{
    return false;
        }
}

int main(){
    int x;
    cout<<"Enter no: ";
    cin>>x;
    cout<<armstrongno(x);
}