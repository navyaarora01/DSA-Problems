#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int x){
        data =x;
        next = prev = NULL;
    }
};
Node *deleteLastNodeDLL(Node *head){
    if(head == NULL ){
        return NULL;
    }
    if(head->next == NULL){
        delete head;
        return NULL;
    }
    else{
    Node *curr = head;
    while(curr->next->next!=NULL){
        curr=curr->next;
    }
    delete curr->next;
    curr->next=NULL;
    
    }
    //  while(curr->next!=NULL){
    //     curr=curr->next;
    // }
    // curr->prev->next = NULL;
    // delete curr;
        
    // }
    return head;
}
void printList(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<(curr->data)<<endl;
        curr=curr->next;
    }
}
int main ()
{
  Node *head = new Node (10);
  head->next = new Node (20);
  head->next->next = new Node (30);
  head->next->next->next = new Node (40);
  head =deleteLastNodeDLL(head);
//   head =deleteLastNodeDLL(head);
  printList(head);
  return 0;
}
