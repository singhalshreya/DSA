#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Heap{
    public:
    int arr[100];
    int size;

    Heap(){
        size=0;
        arr[0] =-1;
    }

    void insert(int value){
        size++;
        arr[size] = value;
        int index = size;
    
        while(index>1){
            int parent = index/2;
            if(arr[index]> arr[parent]){
                swap(arr[index], arr[parent]);
                index = parent;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
    }

    void deletion(){
        if(size==0){
            cout<<"Nothing to delete"<<endl;
        }
        arr[1] = arr[size];
        size--;

        int i = 1;
        while(i<size){
            int lc = 2*i;
            int rc = 2*i +1;

            if(lc<size && arr[i]< arr[lc]){
                swap(arr[i], arr[lc]);
                i=lc;
            }
            if(rc<size && arr[i]< arr[rc]){
                swap(arr[i], arr[rc]);
                i=rc;
            }
            else{
                return;
            }
        }
    }

    
};
void heapify(vector<int> & nums, int n, int i){
        int largest = i;
        int lc = 2*i ;
        int rc = 2*i +1;

        if(lc<n && nums[lc] >nums[largest]){
            largest = lc;
        }
        if(rc<n && nums[rc] >nums[largest]){
            largest = rc;
        }

        if(largest != i){
            swap(nums[i], nums[largest]);
            heapify(nums, n, largest);
        }
        
    }

int main(){
    // Heap h;
    // h.insert(40);
    // h.insert(50);
    // h.insert(20);
    // h.insert(16);
    // h.insert(70);
    // h.print();
    // h.deletion(); //delete root node
    // cout<<endl;
    // h.print();

    vector<int> nums = {2,40,3,5,6,1,8,10,30,20,80};
    int n = nums.size();
   
    for(int i=n/2;i>0;i--){
        heapify(nums,n,i);
    }
    for(int i=1;i<n;i++){
        cout<<nums[i] <<" ";
    }

}