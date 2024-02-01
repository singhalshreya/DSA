#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class TreeNode{
public:
int data;
TreeNode* left;
TreeNode* right;

TreeNode(int data){
    this->data = data;
    left = NULL;
    right = NULL;
}

~TreeNode(){
    delete left;
    delete right;
}
};

int height(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    return max(height(root->left),height(root->right)) +1;
}

int main(){
TreeNode* root = new TreeNode(1);
TreeNode* node1 = new TreeNode(2);
TreeNode* node2 = new TreeNode(3);
root->left = node1;
root->right = node2;
cout<<height(root);
}