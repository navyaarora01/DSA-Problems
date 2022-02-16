
#include<iostream>
#include<queue>
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

void levelOrderTriversal(Node *root){
    if(root == NULL){
        return;
    }
    queue<Node *>q;
    q.push(root);
    while(q.empty()==false){
      
        Node *curr = q.front();
        q.pop();
        cout<<(curr->key)<<" ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
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
      levelOrderTriversal(root);
    return 0;
}
/*tc = O(n);  more precisely 0(n)
auxilary space = O(n);
        Auxilary is equal to the queue size
        or we can say that it is always equal to the width of binary tree ...coz at a time there is 
        only one row or level of tree in the queue.
        so if the tree has only one branch size then aux space will be O(1)
        but if it is fully branched tree then width of tree is O(n)
so auxilary space 
      for best case = O(1)     when there is single branch
      for avg case  = O(w)     where w is width of binary tree and 1<=w<=n
      for worst case =O(n)     when tree is fully branched  
         This is beacause for nth or last level in a tree there will be (n+1)/2 nodes so ax spc = O(n)  */ 
      