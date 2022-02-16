#include <iostream>
using namespace std;
struct Node
{
    int key;
    Node *left, *right;
    Node(int x)
    {
        key = x;
        left = right = NULL;
    }
};
//******recursive***********
// tc = O(h)
// aux space = O(h)
bool searchR(Node *root, int x)
{
    if (root == NULL)
    {
        return false;
    }
    else if (root->key == x)
    {
        return true;
    }
    else if (root->key > x)
    {
        return searchR(root->left, x);
    }
    else
    {
        return searchR(root->right, x);
    }
}
//******iterative***********
// tc = O(h)
// aux space = O(1)
bool searchI(Node *root, int x)
{
    while (root != NULL)
    {
        if (root->key == x)
        {
            return true;
        }
        else if (root->key > x)
        {
            root = root->left;
        } 
        else
        {
            root = root->right;
        }
    }
    return false;
}

// iterative is better than recursive
int main()
{
    Node *root = new Node(50);
    root -> left = new Node(30);
    root -> right = new Node(80);
    root -> left -> left = new Node(15);   
    cout<<searchR(root , 80)<<endl;
    cout<<searchI(root , 80);
    return 0;
}