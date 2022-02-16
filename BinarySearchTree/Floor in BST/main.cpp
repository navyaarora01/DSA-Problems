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
Node *floor(Node *root , int x){
    Node *res = NULL;
    while(root!=NULL){
        if(root->key==x){
            return root;
        }
        else if(root->key>x){
            root = root->left;
        }
        else{
            res = root;
            root = root->right;
        }
    }
    return res;
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
    Node *ans  = floor(root , 90);
    cout<<ans<<" "<<ans->key<<endl;
    return 0;
}
//tc = O(h)
//aux space = o(1)