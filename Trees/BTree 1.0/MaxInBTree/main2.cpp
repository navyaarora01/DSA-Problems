//iterative approach
#include<iostream> 
#include<queue>
using namespace std; 
struct Node{ 
    int key; 
    Node *left; 
    Node *right; 
    Node(int x){ 
        key = x; 
        left  = right = NULL; 
    } 
}; 
void maxInBTreeI(Node *root){ 
   if(root == NULL){ 
       return  ; 
   } 
   int maxno = INT16_MIN; 
   queue<Node *>q; 
   q.push(root); 
   while(q.empty()==false){
      
        Node *curr = q.front();
        q.pop();
        maxno = max(maxno , curr->key);
        // cout<<(curr->key)<<" ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
    cout<<maxno;
//   return maxno;
 
} 
int main() 
{ 
    Node *root = new Node(50); 
    root->left = new Node(30); 
    root->left->left = new Node(55); 
    root->left->right = new Node(87); 
    root->left->left->right = new Node(990); 
    root->right = new Node(56); 
    root->right->left = new Node(90); 
    root->right->left-> right = new Node(100); 
    maxInBTreeI(root); 
    // cout<<maxno; 
    return 0; 
} 
//tc = O(n); 
// auxilary space = O(w) 