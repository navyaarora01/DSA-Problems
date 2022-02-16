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
void nodeAtK(Node *root , int k){
    if(root == NULL){
        return;
    }
    if(k==0){
        cout<<(root->key)<<endl;
    }
    else{
        nodeAtK(root->right ,k-1) ;
        nodeAtK(root->left , k-1);
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
    nodeAtK(root , 0);

    return 0;
}
//tc in best case = O(1)              for k =0
// tc in worst case or avg case =O(n)
//auxilary space O(h)      h=height of binary tree = height of longest branch of tree