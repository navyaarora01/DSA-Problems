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
Node *reverseDLL(Node *head){
    if(head == NULL || head->next==NULL){
        return head;
    }
    Node *temp = NULL ;
    Node *curr = head;
    while(curr!=NULL){
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next =temp;
        curr=curr->prev;   // curr=curr->next(triversing case)
    }
    return temp->prev; 
}
void printList(Node *head){
    Node *curr = head;
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
    head = reverseDLL(head);
    // cout<<head->next->data;
    printList(head);
    return 0;
}

