#include <iostream>
#include <queue>
#include <stack>
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
void bfs(int v , Node graph[]){
    queue<int> q;
    int visit[v] = {0};
    int startNode;
    cout<<"Enter the starting Node for BFS: ";
    cin>>startNode;
    cout<<endl;
    q.push(startNode);
    while(!q.empty()){
        if(visit[q.front()]==0){
            cout<<q.front()<<"-> ";
            visit[q.front()] = 1;
            int front = q.front();
            q.pop();
            Node *curr = graph[front].start;
            while(curr!=NULL){
                q.push(curr->data);
                curr = curr->next;
            }
        }
        else{
            q.pop();
        }
    }
}
void dfs(int v , Node graph[]){
    stack<int> s;
    int visit[v] = {0};
    int startNode;
    cout<<"Enter the starting Node for DFS: ";
    cin>>startNode;
    cout<<endl;
    s.push(startNode);
    while(!s.empty()){
        if(visit[s.top()]==0){
            cout<<s.top()<<"-> ";
            visit[s.top()] = 1;
            int front = s.top();
            s.pop();
            Node *curr = graph[front].start;
            while(curr!=NULL){
                s.push(curr->data);
                curr = curr->next;
            }
        }
        else{
            s.pop();
        }
    }
}
int main(){
    int v , v1 , j;
    cout<<"Enter number if vertices: ";
    cin>>v;
    Node graph[v];             //Array of vertices(list)
    for(int i=0;i<v;i++){
        cout<<"Enter the vertices adjacent to vertex "<<i<<": ";
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
    bfs(v , graph);
    cout<<endl;
    dfs(v , graph);
}