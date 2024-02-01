#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i){
int largest  = i;
int lc = 2*i ;
int rc = 2*i+1;

if(lc<=n && arr[lc]>arr[largest]){
    largest = lc;
}
if(rc<=n && arr[rc]>arr[largest]){
    largest = rc;
}
if(largest !=i){
    swap(arr[i], arr[largest]);
    heapify(arr, n, largest);
}

}
void heapsort(int arr[], int n){
   int size = n;
   while(size>1){
    swap(arr[1], arr[size]);
    size--;
    heapify(arr, n, 1);
   } 
}

int main(){
    int arr[6] = {-1,70,45,90,23,47};
    int n = 5;
    
    cout<<"Before sorting"<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=n/2;i>0;i--){
        heapify(arr, n,i);
    }
    heapsort(arr, n);
   cout<<"After sorting"<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}