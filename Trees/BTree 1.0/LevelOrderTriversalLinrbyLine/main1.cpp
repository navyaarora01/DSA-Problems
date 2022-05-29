// ************Method 1*********
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

void levelOrderTriversalByLine(Node *root){
    if(root == NULL){
        return;
    }
    queue<Node *>q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1){
        Node *curr = q.front();
        q.pop();
        if(curr == NULL){
            cout<<"\n";
            q.push(NULL);
            continue;
        }
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
      levelOrderTriversalByLine(root);
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
      for worst case =O(n)     when tree is fully branched
      for best case = O(1)     when there is single branch
      and avg case  = O(w)     where w is width of binary tree and 1<=w<=n*/


/*Here  everything is same but as we are considering null pointers too so tc will be O(n+h) == O(n)
    this is coz there will be addition of h null ptr for each levelOrderTriversalByLine
Auxilary sapce will still be equal to 0(w)   ie width of tree*/