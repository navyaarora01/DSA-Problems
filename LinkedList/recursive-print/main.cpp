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

void rPrintList(Node *head){
    if(head == NULL){
        return ;
    }
        cout<<(head->data)<<endl;
       rPrintList(head->next);
    
}
int main ()
{
  Node *head = new Node (10);
  head->next = new Node (20);
  head->next->next = new Node (30);
  head->next->next->next = new Node (40);
  rPrintList(head);
  return 0;
}

//TC = O(n)
// Auxilary space = O(n)--------Because there will n+1 calls for that function 
