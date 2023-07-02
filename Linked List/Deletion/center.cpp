#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
public: 
int data;
Node* next;

Node(){
    data = 0;
    next = NULL ;
}

Node(int data){
    this->data = data;
    this->next = NULL;
}
};

Node* deleteNode(Node *head,int x){
    Node* temp = head;
    if(x==1){
      return head->next;  
    }
    for(int i=1;i<x-1;i++){
        temp = temp->next;
    }
    Node* rest = temp->next->next;
    temp->next->next = NULL;
    temp->next = rest;
    
    return head;
}

void insertionfront(Node* &head, int val){
    Node* newnode = new Node(val);
    newnode->data = val;
    newnode->next = head;
    head = newnode;
}


void print(Node* &head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}

int main(){
    Node* head = NULL;
    int x;
    cin>>x;
    insertionfront(head, 10);
    insertionfront(head, 20);
    insertionfront(head, 30);
    insertionfront(head, 40);
    print(head);
    deleteNode(head, x);
    cout<<endl;
    print(head);
    return 0;
}