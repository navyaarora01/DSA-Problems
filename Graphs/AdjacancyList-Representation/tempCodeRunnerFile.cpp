
    temp->next=start;
    start= temp;
}
void Node :: display(){
    Node *curr = start;
    while(curr!=NULL){
        cout<<(curr->data)<<endl;
        curr = curr->next;