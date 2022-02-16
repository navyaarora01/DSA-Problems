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
Node *insertBegin(Node *head , int x){
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
};
void printList(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<(curr->data)<<endl;
        curr = curr->next;
    }
}
int main ()
{
  Node *head = NULL;
  head = insertBegin (head, 10);
  head = insertBegin (head, 20);
  head = insertBegin (head, 30);
  printList(head);
  return 0;
}


// TC = O(1)


