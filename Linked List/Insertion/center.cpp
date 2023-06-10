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

void insertioncenter(Node* &head, int val, int pos){
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        return;
    }
    newnode->data = val;
    Node* temp = head;
    for(int i = 2;i<pos;i++){
        if(temp->next != NULL){
            temp = temp->next;
        }
    }
    newnode->next = temp->next;
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
    insertioncenter(head, 10, 0);
    insertioncenter(head, 20, 1);
    insertioncenter(head, 30, 1);
    insertioncenter(head, 40, 2);
    print(head);
    return 0;
}