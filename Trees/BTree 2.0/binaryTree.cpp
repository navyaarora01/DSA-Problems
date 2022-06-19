#include <bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node* buildTree(node* root){
    int data;
    cout<<"Enter the  data :"<<endl;
    cin>>data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"Enter data for inserting in left of "<<data<<" "<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right of "<<data<<" "<<endl;
    root->right = buildTree(root->right);
    return root;

}
void levelOrderTriversal(node *root){
    if(root == NULL){
        return;
    }
    queue<node *>q;
    q.push(root);
    while(q.empty()==false){
      
        node *curr = q.front();
        q.pop();
        cout<<(curr->data)<<" ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
  
}
void buildFromLevelOrder(node* &root) {
    queue<node*> q;

    cout << "Enter data for root" << endl;
    int data ;
    cin >> data;
    root = new node(data);
    
    q.push(root);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1) {
            temp -> left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1) {
            temp -> right = new node(rightData);
            q.push(temp->right);
        }
    }
 }

int main(){
    node* root = NULL;
   // root = buildTree(root);
    
    buildFromLevelOrder(root);
    levelOrderTriversal(root);
     return 0;
}