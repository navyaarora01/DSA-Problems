#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
    node(int x){
        data = x;
        next = NULL;
    }
};
void printCList(node *head){
    if(head == NULL){
        return;
    }
    cout<<(head->data)<<endl;
    for(node *p=head->next;p!=head ; p=p->next){
        cout<<(p->data)<<endl;
    }
}
int main(){
    node *head = new node(10);
    // head ->next = head;
    head->next = new node(20);
    head->next->next = new node (30);
    head->next->next->next = head;
    printCList(head);
    cout<<head<<endl;
    cout<<head->next->next->next<<endl;   // same address of last->next and head of node...it means they are in circular form
    return 0;
}
