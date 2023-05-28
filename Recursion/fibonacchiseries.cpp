// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;


// int main(){
  // iterative
//   int n;
//   cin>>n;
//     int a =0,b=1;
//     cout<<a << " "<<b << " ";
//     for(int i=2;i<n;i++){
//         int c = a+b;
//         cout<<c <<" ";
//         a = b;
//         b = c;
        
//     }

//     return 0;
// }


// nth fib no
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// recursive
int fib(int n){
  if(n==0){
    return 0;
  }
  if(n==1){
    return 1;
  }
  return fib(n-1) + fib(n-2);
}

int main(){
  int n;
  cin>>n;
  cout<<fib(n);
    return 0;
}
