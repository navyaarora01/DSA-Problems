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

//Time complexity  = O(n)
//auxilary space  = O(h)   coz there will be h+1 calls in the recursion call stack
int height(Node *root){
    if(root == NULL){
        return 0;
    }
    return max(height(root->left),height(root->right))+1;
}
int main()
{
    Node *root = new Node(50);
    root -> left = new Node(30);
    root -> right = new Node(20);
    root -> left -> left = new Node(40);
    // root -> left -> left->right = new Node(40); 
    int h = height(root);
    cout<< h <<endl;  
    return 0;
}
