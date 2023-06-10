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

void insertionend(Node* &head, int val){
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        return;
    }
    newnode->data = val;
    newnode->next = NULL;
     Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newnode;
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
    insertionend(head, 10);
    insertionend(head, 20);
    insertionend(head, 30);
    insertionend(head, 40);
    print(head);
    return 0;
}