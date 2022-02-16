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
Node *insertAtBegin(Node *head , int x){
    Node *temp = new Node(x);
    if(head == NULL){
        temp->next = temp; 
        return temp;
    }
    else{
        Node *curr = head;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next = temp;
        temp->next = head;
    }
    return temp;
}
void printCList(Node *head){
    if(head == NULL){
        return;
    }
    cout<<(head->data)<<endl;
    for(Node *p=head->next;p!=head ; p=p->next){
        cout<<(p->data)<<endl;
    }
}
int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;
    head = insertAtBegin(head , 40);
    printCList(head);
    // cout<<head->data<<endl;
}


