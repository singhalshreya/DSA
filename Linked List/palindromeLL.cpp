#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
public: 
int val;
Node* next;

Node(){
    val = 0;
    next = NULL ;
}

Node(int val){
    this->val = val;
    this->next = NULL;
}
};

bool isPalindrome(Node* &head) {
        stack<int> st;
        // bool ans = false;
        if(head == NULL){
            return false;
        }
        Node* temp  = head;
        Node* tail  = head;
        while(tail!= NULL){
            st.push(tail->val);
            tail = tail->next;
        }

        while(temp !=NULL){
            int s = st.top();
            st.pop();
            if(temp->val != s){
                return false;
            }
            temp = temp->next;
        }
       
        return true;
    }

   
void insertionend(Node* &head, int val){
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        return;
    }
    newnode->val = val;
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
        cout<<temp->val<<"->";
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
    cout<<endl;
    cout<<isPalindrome(head);
    return 0;
}