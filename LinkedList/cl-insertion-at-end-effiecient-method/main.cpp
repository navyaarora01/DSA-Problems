//****************IMPORTANT*********************
// code of insertion at begginig and at the nd of the list is just same but there is difference in printing the function
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
        
        for(Node *p=head->next;p!=head;p=p->next){
            cout<<(p->data)<<endl;
        }
        cout<<(head->data)<<endl;    // here is the difference we need to add this line at the end (after for loop )of this function
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