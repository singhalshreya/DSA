// Given a 32 bit number X, reverse its binary form and print the answer in decimal.
#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;

long long reverseno(long long N){
  long long rev = 0;
  while(N!=0){
    rev = rev*10 + (N%10);
    N=N/10;
  }
 return rev;
// TC = O(n) where n=no of digits
// SC = O(1)
}
long long dtb(long long n) {
  int decimal = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    decimal += rem * pow(2, i);
    ++i;
  }
  return decimal;
}
long long reversedBits(long long X) {
        long long binary=0;
        while(X!=0){
            binary = binary*10 + (X%2);
            X = X/2;
        }
        long long reversed = reverseno(binary);
        long long final = dtb(reversed);
        return final;
}

int main(){
int N;
cout<<"Enter no:";
cin>>N;
cout<<reversedBits(N)<<endl;
}