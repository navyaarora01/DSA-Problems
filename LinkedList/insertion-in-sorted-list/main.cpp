#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
Node *insertSortedList(Node *head , int x){
    Node *temp = new Node(x);
    if(head == NULL){
        return temp;
    }
    if(x<head->data){
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    while(curr->next!=NULL && curr->next->data<x){
        curr=curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}
void printList(Node *head){
    if(head == NULL){
        return;
    }
    Node *curr = head;
    while(curr!=NULL){
        cout<<(curr->data)<<endl;
        curr=curr->next;
    }
}
int main(){
    Node *head = new Node(10);
    head->next = new Node (20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head = insertSortedList(head , 5);
    printList(head);
}