// iterative approach

#include <iostream>
#include <queue>
using namespace std;
struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int x)
    {
        key = x;
        left = right = NULL;
    }
};

int getSizeI(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int count = 0;
    queue<Node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        count++;
        Node *curr = q.front();
        q.pop();
        // cout << (curr->key) << " ";
        if (curr->left != NULL)
        {
            q.push(curr->left);
        }
        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
    }
    return count;
}

int main()
{
    Node *root = new Node(50);
    root->left = new Node(30);
    root->right = new Node(20);
    root->left->left = new Node(40);
    root->left->right = new Node(90);
    root->right->left = new Node(45);
    root->right->right = new Node(80);
    root->right->right->left = new Node(88);
    int size = getSizeI(root);
    cout << size << endl;
    return 0;
}
//tc =O(n)
// aux. space = O(w)  i.e. wmax widthof btree