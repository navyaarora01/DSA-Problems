#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[] , int u ,int v){
    adj[u].push_back(v);
}
void topologicalSort(int i , vector<int> adj[],int visited[] , stack<int> &s){
    visited[i] = 1;
    for(int u : adj[i]){
        if(visited[u]==0){
            topologicalSort(u , adj , visited , s);
        } 
        
    }
   s.push(i);
}
void DFS(vector<int> adj[] , int visited[],int V){
    stack<int> s;
    for(int i=0;i<V;i++){
        if(visited[i]==0){
            topologicalSort( i ,adj , visited , s);
        }
        
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main(){
    int V = 13;
    
    vector<int> adj[V];
    int visited[V]={0};
    addEdge(adj , 0 ,1);
    addEdge(adj , 0 ,2);
    addEdge(adj , 1 ,4);
    addEdge(adj , 2 ,4);
    addEdge(adj , 3 ,2);
    addEdge(adj , 3 ,5);
    addEdge(adj , 4 ,6);
    addEdge(adj , 4 ,7);
    addEdge(adj , 5 ,9);
    addEdge(adj , 5 ,10);
    addEdge(adj , 6 ,8);
    addEdge(adj , 7 ,8);
    addEdge(adj , 7 ,9);
    addEdge(adj , 8 ,11);
    addEdge(adj , 9 ,11);
    addEdge(adj , 9 ,12);
    addEdge(adj , 10,9);
    DFS(adj , visited , V);
    return 0;
    
}