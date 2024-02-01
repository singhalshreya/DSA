#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Queueusingarray{
int *array;
int start, end,currsize, maxsize;
 
 Queueusingarray(int maxsize){
    array = new int[maxsize];
    start = -1;
    end = -1;
    currsize = 0;
 }

 void enqueue(int data){
    if(currsize==maxsize){
        cout<<"Full"<<endl;
        return ; 
    }
    array[start] = data;
    currsize++;
 }

 int dequeue(){

 }

 bool empty(){
return currsize==0;
 }

int front(){
if(empty()){
    cout<<"Empty"<<endl;
    return 0;
}
return array[]
}

};

int main(){
    Queueusingarray q(5);
    q.enqueue(1);
}