#include<iostream>
using namespace std;
struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int x){
        key = x;
        left = right = NULL;
    }
};

int isBalanced(Node *root){
    if(root==NULL){
        return 0;
    }
    int lft = isBalanced(root->left);
    if(lft==-1){
        return -1;
    }
    int rght = isBalanced(root->right);
    if(rght ==-1){
        return -1;
    }
    if(lft-rght>1){
        return -1;
    }
    return max(lft,rght)+1;
}
int main()
{
   Node *root = new Node(50);
    // root->left = new Node(26);
    root->right = new Node(24);
    root->right->left = new Node(6);
    root->right->right = new Node(18);
    root->right->right->right = new Node(138);
    // root->left->left= new Node(16);
    // root->left->right = new Node(10);
   cout<<isBalanced(root)<<endl;
    return 0;
}
//tc = O(n)
