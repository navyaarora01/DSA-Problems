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

int searchElement(Node *head , int x){
    Node *temp =head;
    int pos =1;
    while(temp!=NULL){
        if(temp->data==x){
            return pos;
        }
        else{
            pos++;
            temp=temp->next;
        }
    }
    return -1;
}
int main ()
{
  Node *head = new Node (10);
  head->next = new Node (20);
  head->next->next = new Node (30);
  head->next->next->next = new Node (40);
  int k = searchElement(head , 10);
  cout<<k<<endl;
  return 0;
}
