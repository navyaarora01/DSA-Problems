#include <iostream>
using namespace std;
class Node{
    public:
      int data;
      Node *next;
      Node *start;
      Node();
      void insert(int);
      void display();
};
Node :: Node(){
    start = NULL;
}
void Node:: insert(int x){
    Node *temp  = new Node;
    temp->data = x;
    temp->next=start;
    start= temp;
}
void Node :: display(){
    Node *curr = start;
    while(curr!=NULL){
        cout<<(curr->data)<<"-> ";
        curr = curr->next;
    }
    cout<<endl;
}
int main(){
    int v , v1 , j;
    cout<<"Enter number of vertices: ";
    cin>>v;
    Node graph[v];             //Array of vertices
    for(int i=0;i<v;i++){
        cout<<"Enter the vertex adjacent to vertex "<<i<<": ";
        cin>>v1; 
        graph[i].insert(v1);
        cout<<"Is there any other vertex adjacent to vertex "<<i<<"?-(1-yes and 0-No): ";
        cin>> j;
        if(j){
            i--;
        }
    }
    for(int i=0;i<v;i++){
        graph[i].display();
    }
}   