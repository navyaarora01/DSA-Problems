#include <iostream>
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
Node *insertI(Node *root , int x){
    Node *temp = new Node(x);
    Node *parent = NULL;
    Node *curr = root;
    while(curr!=NULL){
        parent  = curr;
        if(curr->key>x){
           curr = curr->left;
        }
        else if(curr->key<x){
           curr = curr->right;
        }
        else{
            return root;
        }
    }
    if(parent == NULL){
        return temp;
    }
    else if(parent ->key>x){
        parent->left = temp;
    }
    else{
        parent->right = temp;
    }
    return root;
}
Node *insertR(Node *root , int x){
    if(root == NULL){
        return new Node(x);
    }
    else if(root->key<x){
        root->right = insertR(root->right , x);
    }
    else if(root->key>x){
        root->left = insertR(root->left , x);
    }
    return root;
}
void *inorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<(root->key)<<" ";
        inorder(root->right);
    }
}
int main()
{
    Node *root = new Node(50);
    root -> left = new Node(30);
    root -> right = new Node(80);
    root -> left -> left = new Node(15);   
    root -> left -> right = new Node(40);   
    root -> right -> left = new Node(70);   
    root -> right -> right = new Node(100); 
    root =  insertI(root , 48); 
    root = insertR(root , 190); 
    inorder(root); 
    return 0;
}
//tc for both is O(h)
//aux space for recursive is o(h)