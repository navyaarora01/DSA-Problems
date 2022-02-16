
   int count = q.size();
  for(int i=0;i<count;i++){
        Node *curr = q.front();
        q.pop();
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

 