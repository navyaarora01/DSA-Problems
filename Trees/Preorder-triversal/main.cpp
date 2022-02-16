//preorder = root->left->right
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
void preorder(Node *root){
    if(root!=NULL){
        cout<<(root->key)<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
int main()
{
    Node *root = new Node(50);
    root -> left = new Node(30);
    root -> right = new Node(20);
    root -> left -> left = new Node(40);   
    root -> left -> right = new Node(90); 
    root -> right->left = new Node(45);
    root -> right->right= new Node(80);
    root -> right->right->left= new Node(88);
      preorder(root);
    return 0;
}

//time complexity = O(n)
//auxilary space = O(h)     h= highest branch