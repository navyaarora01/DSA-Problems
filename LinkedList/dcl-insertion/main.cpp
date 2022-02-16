#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int x){
        data = x;
        next = prev = NULL;
    }
};
Node *insertAtBeginDCL(Node *head , int x){
    Node *temp = new Node(x);
    if(head == NULL){
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }
    temp->prev= head->prev;
    temp->next = head;
    head->prev->next = temp;
    head->prev = temp;
    return temp;      // for insertion at end return head ....rest will be same. 
}
void printDCL(Node *head){
    if(head == NULL){
        return;
    }
    
    else{Node*p = head;
        do{
            cout<<(p->data);
            p=p->next;
        }while(p!=head);
    }
}
int main(){
    Node *head = new Node(10); 
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(20);
    Node *temp3 = new Node(30);
    head->prev = temp3;
    temp1->prev = head;
    temp2->prev = temp1;
    temp3->prev= temp2;
    head = insertAtBeginDCL(head , 40);
    printDCL(head);
    
}