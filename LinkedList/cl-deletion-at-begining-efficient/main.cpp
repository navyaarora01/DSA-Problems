//time complexity is o(1)
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node (int x){
        data = x;
        next = NULL;
    }
};
Node *deleteAtFirst(Node *head){
    if(head == NULL){
        return NULL;
    }
    if(head->next == head ){
            delete head;
            return NULL;
    }
    head->data = head->next->data;
    Node *temp = head->next;
    head->next = head->next->next;
    delete temp;
    return head;
    
}
void printCList(Node *head){
    if(head == NULL){
        return;
    }
    else{
         cout<<(head->data)<<endl;   
        for(Node *p=head->next;p!=head;p=p->next){
            cout<<(p->data)<<endl;
        }
    }
}
int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head = deleteAtFirst(head);
    printCList(head);
    return 0;
}
