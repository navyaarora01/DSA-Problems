//recursive approach
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
int getSize(Node *root){
    if(root == NULL){
        return 0;
    }
    return(1+getSize(root->left)+getSize(root->right));
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
    int size = getSize(root);
    cout<<size<<endl;
    return 0;
}
//Time complexity=O(n);
//Auxilary space = O(h);
    //   at any point of time max auxialry space used is (h+1) ie. (height of binary tree +NULL)