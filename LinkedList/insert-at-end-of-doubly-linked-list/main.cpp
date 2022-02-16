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
Node *insertAtEnd(Node *head , int x){
    Node *temp = new Node(x);
    if(head = NULL){
        return temp;
    }
        Node *curr = head;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=temp;
        temp->prev = curr;
        return head;
}
void printList(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<(curr->data)<<endl;
        curr = curr->next;
    }
}
int main(){
    Node *head = NULL;
    head = insertAtEnd(head , 10);
    head = insertAtEnd(head , 20);
    printList(head);
    // cout<<head->data;
    return 0;
}


