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
void printLeftNode(Node *root){ 
   if(root == NULL){ 
       return  ; 
   } 

   queue<Node *>q; 
   q.push(root); 
   while(q.empty()==false){
   int count = q.size();
  for(int i=0;i<count;i++){
        Node *curr = q.front();
        q.pop();
    //    if(i==count-1){                //for right view
       if(i==0){
           cout<<(curr->key)<<" ";
       }
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    } 

 }
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
    printLeftNode(root); 
    
    return 0; 
} 
//tc = O(n); 
// auxilary space = O(w)    in worst case it is O(n)