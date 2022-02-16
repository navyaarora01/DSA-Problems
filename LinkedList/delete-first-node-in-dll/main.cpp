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
Node *deleteNodeDLL(Node *head){
    if(head == NULL ){
        return NULL;
    }
    if(head->next == NULL){
        delete head;
        return NULL;
    }
    else{
    Node *temp = head;
    head = head->next;
    head->prev = NULL;
    delete temp ;
    return head;
    
    }
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
  head =deleteNodeDLL(head);
  printList(head);
//   cout<<(head->next->data);
  return 0;
}
