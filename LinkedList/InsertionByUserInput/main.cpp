#include <iostream>
using namespace std;
struct Node
{
  int data;
  Node *next;
    Node (int x){
    data = x;
    next = NULL;
  }
};
void printList(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<(curr->data)<<" -> ";
        curr=curr->next;
    }
}
Node *insertEnd (Node * head, int x){
   Node *temp = new Node(x);
   if(head == NULL){
   return temp;
   }
   Node *curr = head;
   while (curr->next!= NULL){
       curr = curr->next;
   }  
   curr->next = temp;
   return head;
}

int main ()
{
  Node *head = NULL;
  int n,value;
  cout<<"Enter the length of linked list"<<endl;
  cin >>n;
  cout<<"Insert the value of nodes: "<<endl;
  for(int i=0;i<n;i++){
    cin>>value;
    head = insertEnd (head, value);
  }
cout<<"Given linked list is: "<<endl;
  printList (head);
  return 0;
}

