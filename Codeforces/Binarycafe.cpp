// Once upon a time, Toma found himself in a binary cafe. It is a very popular and unusual place.

// The cafe offers visitors k
//  different delicious desserts. The desserts are numbered from 0
//  to k−1
// . The cost of the i
// -th dessert is 2i
//  coins, because it is a binary cafe! Toma is willing to spend no more than n
//  coins on tasting desserts. At the same time, he is not interested in buying any dessert more than once, because one is enough to evaluate the taste.

// In how many different ways can he buy several desserts (possibly zero) for tasting?

// Input
// The first line of the input contains a single integer t
//  (1≤t≤1000
// ) — the number of test cases.

// Then follows t
//  lines, each of which describes one test case.

// Each test case is given on a single line and consists of two integers n
//  and k
//  (1≤n,k≤109
// ) — the number of coins Toma is willing to spend and the number of desserts in the binary cafe.

// Output
// Output t
//  integers, the i
// -th of which should be equal to the answer for the i
// -th test case — the number of ways to buy desserts for tasting.

// Example
// inputCopy
// 5
// 1 2
// 2 1
// 2 2
// 10 2
// 179 100
// outputCopy
// 2
// 2
// 3
// 4
// 180
// Note
// Variants for 1st sample: {}, {1}

// Variants for 2nd sample: {}, {1}

// Variants for 3rd sample: {}, {1}, {2}

// Variants for 4th sample: {}, {1}, {2}, {1, 2}

#include<iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
      int n, k;
      cin>>n>>k;
      if(log2(n)<k){
          cout<<n+1<<endl;
      }
  else{
      cout<<(int)pow(2,k)<<endl;
  }
    }
    return 0;
}
