//Here we will put new node after head in the circular list and then we will swap data of both head and temp
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
    Node *temp  = new Node(x);
    if(head == NULL){
        temp->next = temp;
        return temp;
    }
    else{
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return head;
    }
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
    head->next->next->next = head;
    head = insertAtBegin(head , 40);
    printCList(head);
    return 0;
    
}