#include<iostream>
using namespace std;


int bs(int *a, int start, int end, int key){
    int mid = (start+end)/2;
  if(start>end){
    return -1;
   }
    if(a[mid] == key){
        return mid;
    }
    else if(a[mid] > key){
        return bs(a,start,mid-1,key);
    }
    else{
        return bs(a,mid+1,end,key);
    }
  }


int main(){
    int a[] = {1,3,6,10,20,50,60};
    int n = sizeof(a)/sizeof(a[0]);
    int key;
    cin>>key;
    cout<<bs(a,0,n-1,key);
    return 0;
}