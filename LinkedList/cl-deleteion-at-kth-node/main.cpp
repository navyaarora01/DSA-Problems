//time complexity is o(n)
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
Node *deleteAtKthNode (Node *head , int k){
    if(head == NULL){
        return NULL;
    }
    if(k==1){
            Node *temp = head;
            head = head->next;
            delete temp;
            return head;
    }
    Node *curr = head;
    for(int i=0;i<k-2;i++){   //i=1 to k-2
        curr=curr->next;
    }
    Node *temp = curr->next;
    curr->next = curr->next->next;
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
    head = deleteAtKthNode(head , 2);
    printCList(head);
    return 0;
}

