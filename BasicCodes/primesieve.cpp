#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
vector<bool> a(n,true);
for(int i=2;i<=n;i++){
    if(a[i] == true){
        for(int j=2*i;j<=n;j+=i){
            a[j] = false;
        }
    }
}

for(int i=2;i<=n;i++){
    if(a[i] == true){
        cout<<i<<" ";
    }
}
return 0;
}
