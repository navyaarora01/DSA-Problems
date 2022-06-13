//postorder = left->right->root
#include<iostream>
using namespace std;
#include <stack>
struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int x){
        key = x;
        left = right = NULL;
    }
};
void postorder(Node *root){
    stack <Node *> s1 , s2;
    if(root == NULL){
        return;
    }
    s1.push(root);
    while(!s1.empty()){
        Node *curr  = root;
        s1.pop();
        s2.push(curr);
        if(curr->left!=NULL){
            s1.push(curr->left);
        }
        if(curr->right!=NULL){
            s1.push(curr->right);
        }
    }
    while(!s2.empty()){
        cout<<s2.top()<<" ";
        s2.pop();
    }

    // if(root!=NULL){
    //     postorder(root->left);
    //     postorder(root->right);
    //     cout<<(root->key)<<" ";
       
    // }
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
      postorder(root);
    return 0;
}

//time complexity = O(n)
//auxilary space = O(h)     h= highest branch