#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
int data;
Node* next;
Node(int data){
    this->data = data;
    next=NULL;
}
};

class Stackusingll{
  Node* head;
  int size;
  public:
  Stackusingll(){
    head = NULL;
    size =0;
}

int currsize(){
    return size; 
}

void push(int data){
Node* newnode = new Node(data);
newnode->next = head;
head = newnode;
size++;
}

int pop(){
if(empty()){
    return -1;
}
int ans = head->data;
Node* temp = head;

head = head->next;
delete temp;
size--;
return ans;
}

bool empty(){
  return size==0;
}

int Top(){
return head->data;
}
};


int main(){
    Stackusingll s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<s.currsize()<<endl;
    cout<<s.empty()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.empty()<<endl;
    s.push(10);
    cout<<s.Top()<<endl;
    cout<<s.currsize()<<endl;

}

