//recursive approach
#include<iostream>
using namespace std;
struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int x){
        key = x;
        left  = right = NULL;
    }
};
int maxInBTree(Node *root){
    if(root==NULL){
        return INT8_MIN;
    }
    return (max(root->key , max(maxInBTree(root->left),maxInBTree(root->right))));
}
int main()
{
    Node *root = new Node(50);
    root->left = new Node(30);
    root->left->left = new Node(55);
    root->left->right = new Node(87);
    root->left->left->right = new Node(99);
    root->right = new Node(56);
    root->right->left = new Node(90);
    root->right->left-> right = new Node(100);
    int maxno = maxInBTree(root);
    cout<<maxno;
    return 0;
}
//tc = O(n);
// auxilary space = O(h)