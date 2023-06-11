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

Node* swapPairs(Node* head) {
        
        if(head==NULL || head->next == NULL){
            return head;
        }

        else{
            Node* temp = head;
            while(temp!= NULL && temp->next!=NULL){
                swap(temp->data, temp->next->data);
                temp = temp->next->next;
            }
        }
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
    insertionfront(head, 10);
    insertionfront(head, 20);
    insertionfront(head, 30);
    insertionfront(head, 40);
    insertionfront(head, 50);
    insertionfront(head, 60);
    insertionfront(head, 70);
    print(head);
    cout<<endl;
    swapPairs(head);
    print(head);
    return 0;
}