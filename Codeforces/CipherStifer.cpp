// There is a string a (unknown to you), consisting of lowercase Latin letters, encrypted according to the following rule into string s
// after each character of string a
// , an arbitrary (possibly zero) number of any lowercase Latin letters, different from the character itself, is added;
// after each such addition, the character that we supplemented is added.
// You are given string s
// , and you need to output the initial string a
// . In other words, you need to decrypt string s

// Note that each string encrypted in this way is decrypted uniquely.

// Input
// The first line of the input contains a single integer t(1≤t≤1000) — the number of test cases.

// The descriptions of the test cases follow.

// The first line of each test case contains a single integer n
//  (2≤n≤100
// ) — the length of the encrypted message.

// The second line of each test case contains a string s
//  of length n
//  — the encrypted message obtained from some string a
// .

// Output
// For each test case, output the decrypted message a
//  on a separate line.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int temp=0;
        string input, output;
        cin>>input;
        char s;
        s = input[0];
        for(int i=1;i<n;i++){
            if(input[i] == s){
            //   temp = i;
               output.push_back(input[i]);
               s = input[i+1];
               i++;
            }
        }
        cout<<output<<endl;
    }
    return 0;
}