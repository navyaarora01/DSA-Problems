
//Here we use do while loop in this method
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
   node *p = head;
   do{
       cout<<(p->data)<<endl;
       p=p->next;
   }
   while(p!=head);
}
int main(){
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node (30);
    head->next->next->next = head;
    printCList(head);
    cout<<head<<endl;
    cout<<head->next->next->next<<endl;   // same address of last->next and head of node...it means they are in circular form
    return 0;
}