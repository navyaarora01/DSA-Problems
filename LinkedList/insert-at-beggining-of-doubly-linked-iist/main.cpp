#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;
    Node (int x){
        data = x;
        next = prev = NULL;
        
    }
};
Node *insertAtBegin(Node *head , int x){
    Node *temp = new Node(x);
    temp->next = head;
   if(head!=NULL){
        head->prev = temp;
   }
   return temp;
}
void printList(Node *head){
    Node *curr =  head;
    while(curr!=NULL){
        cout<<(curr->data)<<endl;
        curr = curr->next;
    }
}
int main(){
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
     head =insertAtBegin(head , 40);


    printList(head);
    return 0;
}




