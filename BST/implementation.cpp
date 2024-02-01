#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class BST{
public:
int data;
BST* left;
BST* right;

BST(int data){
this->data = data;
left = NULL;
right = NULL;
}

~BST(){
    delete left;
    delete right;
}
};

// searching element
bool hasdata(BST* root, int X){
if(root==NULL){
    return false;
}
if(root->data==X){
    return true;
}
else{
    if(X > root->data){
    return hasdata(root->right, X);
    }
    else{
    return hasdata(root->left, X); 
    }
}
// return true;
}

// insertion of node
BST* insert(BST* root, int val){
    if(root==NULL){
        BST* newnode = new BST(val);
        return newnode;
    }
     BST* newnode1 = new BST(val);
     newnode1->data = val;
     if(val> root->data){
       root->right =  insert(root->right, val);
     }
     else{
        root->left = insert(root->left, val);
     }
     return root;
}

// delete node
BST* deletenode(BST* root, int value){
if(root==NULL){
        return root;
    }
    if(value> root->data){
       root->right = deletenode(root->right, value);
       return root;
     }
    else if(value< root->data){
       root->left =  insert(root->left, value);
       return root;
     }
     else{
        if(root->left==NULL && root->right== NULL){
            delete root;
            return NULL;
        }
        else if(root->left==NULL){
            BST* temp = root->right;
            root->right= NULL;
            delete root;
            return temp;
        }
        else if(root->right==NULL){
            BST* temp = root->left;
            root->left= NULL;
            delete root;
            return temp;
        }
        else{
            BST* minnode = root->right;
            while(minnode->left!=NULL){
                minnode = minnode->left;
            }
            int rightmin = minnode->data;
            root->data = rightmin;
            root->right = deletenode( root->right, rightmin);
            return root;
        }
     }
}




// printing BST
void printBST(BST* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<":";
    if(root->left!=NULL){
        cout<<"L "<<root->left->data;
    }
    if(root->right!=NULL){
        cout<<"R "<<root->right->data;
    }
    cout<<endl;
    printBST(root->left);
    printBST(root->left);
}

int main(){
    BST* root = new BST(10);
    insert(root, 10);
    insert(root, 20);
    insert(root, 40);
    insert(root, 90);
    insert(root, 50);
    insert(root, 30);
    // BST* node1 = new BST(5);
    // BST* node2 = new BST(20);
    // BST* node3 = new BST(3);
    // BST* node4 = new BST(8);
    // BST* node5 = new BST(15);
    // BST* node6 = new BST(30);
    // root->left = node1;
    // root->right = node2;
    // node1->left = node3;
    // node1->right = node4;
    // node2->left = node5;
    // node2->right = node6;
    printBST(root);
    int X;
    cin>>X;
    cout<<hasdata(root, X);
    int val;
    cin>>val;
    cout<<insert(root, val);
}