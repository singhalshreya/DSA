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

void insertionfront(Node* &head, int val){
    Node* newnode = new Node(val);
    newnode->data = val;
    newnode->next = head;
    head = newnode;
}

void deletefront(Node* &head){
    Node* temp = head;
    head = head->next;
    temp ->next = NULL;
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
    insertionfront(head, 10);
    insertionfront(head, 20);
    insertionfront(head, 30);
    insertionfront(head, 40);
    deletefront(head);
    print(head);
    return 0;
}