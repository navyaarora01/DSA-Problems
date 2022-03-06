#include <iostream>
using namespace std;
struct Node
{
  int data;
  Node *next;
  Node(int x)
  {
    data = x;
    next = NULL;
  }
};
Node *insert(Node * head, int x){
   Node *temp = new Node(x);
   if(head == NULL){
   return temp;
   }
   Node *curr = head;
   while (curr->next!= NULL){
       curr = curr->next;
   }  
   curr->next = temp;
   return head;
}

void printList(Node *head)
{
  Node *curr = head;
  while (curr != NULL)
  {
    cout << (curr->data) << endl;
    curr = curr->next;
  }
}
int main(){
    int v , v1 , j;
    cout<<"Enter number if vertices: ";
    cin>>v;
    Node *graph[v];             //Array of vertices
    for(int i=0;i<v;i++){
        cout<<"Enter the vertices adjacent to vertex "<<i<<": ";
        cin>>v1; 
        graph[i]=insert(graph[i] , v1);
        // Node *head = new Node(graph[i]);
        cout<<"Is there any other vertex adjacent to vertex "<<i<<"?-(1-yes and 0-No): ";
        cin>> j;
        if(j){
            i--;
        }
    }
    for(int i=0;i<v;i++){
        printList(graph[i]);
        cout<<endl;
    }
}