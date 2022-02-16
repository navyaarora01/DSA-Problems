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

int height(Node *root){
    if(root == NULL){
        return true;
    }
    return max(height(root->left),height(root->right))+1;
}
bool isBalanced(Node *root){
    if(root==NULL){
        return true;
    }
    int lft = height(root->left);
    int rght = height(root->right);
    return (abs(lft-rght)<=1  &&  isBalanced(root->left)  &&  isBalanced(root->right));

}
int main()
{
   Node *root = new Node(50);
    root->left = new Node(26);
    root->right = new Node(24);
    root->right->left = new Node(6);
    root->right->right = new Node(18);
    root->left->left= new Node(16);
    root->left->right = new Node(10);
   cout<<isBalanced(root)<<endl;
    return 0;
}
//tc = O(n^2);