// sum of the node is equal to sum of left node and sum of right node
#include <iostream>
using namespace std;
struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int x){
        key = x;
        right = left = NULL;

    }
};

bool cSum(Node *root){
    if(root==NULL){
        return true;
    }
    if(root->left == NULL  &&  root->right == NULL){
        return true;
    } 
    int sum =0;
    if(root->left!=NULL){
        sum +=root->left->key;
    }
    if(root->right->key){
        sum +=root->right->key;
    }
    if(root->key == sum && cSum(root->left) &&  cSum(root->right)){
        return true;
    }else{
        return false;
    }
}

int main(){
    Node *root = new Node(50);
    root->left = new Node(26);
    root->right = new Node(24);
    root->right->left = new Node(6);
    root->right->right = new Node(18);
    root->left->left= new Node(16);
    root->left->right = new Node(10);
    // root->left->right->left = new Node(100);
    cout<<cSum(root)<<endl;
}
//tc = O(n);
// aux space = O(h)