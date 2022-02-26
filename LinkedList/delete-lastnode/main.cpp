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
Node *deleteLastNode(Node *head){
    if(head == NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    Node *curr = head;
   while(curr->next->next!=NULL){
        curr=curr->next;
    }
    delete curr->next;
    curr->next=NULL;
    return head;
}
void printList(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<(curr->data)<<endl;
        curr = curr->next;
    }
}Node *insertEnd (Node * head, int x){
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
  deleteLastNode(head);
  deleteLastNode(head);
cout<<"Given linked list is: "<<endl;
  printList (head);
  return 0;
}

// int main ()
// {
//   Node *head = new Node (10);
//   head->next = new Node (20);
//   head->next->next = new Node (30);
//   head->next->next->next = new Node (40);
  
//   printList(head);
//   return 0;
// }

//TC is O(n)





