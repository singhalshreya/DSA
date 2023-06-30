// Given a linked list of n nodes and a key , the task is to check if the key is present in the linked list or not.
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

bool searchKey(int n, struct Node* head, int key) {
        // Code here
        bool ans = false;
        Node* temp = head;
        while(temp!= NULL){
            if(temp->data == key){
                ans = true;
                break;
            }
            temp = temp->next;
        }
        return ans;
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
    int key;
    cin>>key;
    cout<<searchKey(7,head, key);
    
    return 0;
}