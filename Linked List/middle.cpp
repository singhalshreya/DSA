// How will you find the middle element of a singly linked list without iterating the list more than once?

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

int middlenode(Node* &head){
    Node* slow = head;
    Node* fast = head;
    if(head !=NULL){
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
    }
    return slow->data;
}

// TC: O(n)
// SC: O(1)

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
    insertionfront(head, 10);
    insertionfront(head, 20);
    insertionfront(head, 30);
    insertionfront(head, 40);
    cout<<"Linked List: ";
    print(head);
    cout<<endl;
    cout<<middlenode(head);
    return 0;
}