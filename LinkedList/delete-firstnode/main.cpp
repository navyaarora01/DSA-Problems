#include <iostream>
using namespace std;
struct Node
{
  int data;
  Node *next;
    Node (int x)
  {
    data = x;
    next = NULL;
  }
};
Node *deleteNode(Node *head){
    if(head == NULL){
        return NULL;
    }
    else{
        Node *temp = head->next;
        delete head;
        return temp;
    
    //  Node* temp = head;
    // head = head->next;
    // delete temp;
    // return head;
    }
}
void printList(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<(curr->data)<<endl;
        curr = curr->next;
    }
}
int main ()
{
  Node *head = new Node (10);
  head->next = new Node (20);
  head->next->next = new Node (30);
  head->next->next->next = new Node (40);
  head =deleteNode(head);
  printList(head);
  return 0;
}










