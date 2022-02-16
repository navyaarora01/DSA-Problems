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
Node *getsuccessor(Node *curr){
    curr = curr->right;
    while(curr!=NULL&&curr->left!=NULL){
        curr = curr->left;
    }
    return curr;
}

Node *delNode(Node *root , int x){
    if(root == NULL){
        return root;
    }
    else if(root->key<x){
        root->right = delNode(root->right , x);
    }
    else if(root->key>x){
        root->left = delNode(root->left , x);
    }
    else{
        if(root->left == NULL){
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right == NULL){
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else{
            Node *succ = getsuccessor(root);
            root->key = succ->key;
            root->right = delNode(root->right , succ->key);
        }
        return root;
    }
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
    root -> right -> left->left = new Node(55);   
    root -> right -> right = new Node(100); 
    root = delNode(root , 70); 
    inorder(root); 
    return 0;
}
//tc = O(h)
//aux space = o(h)