#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[] , int u ,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
bool BFS(vector<int> adj[] , int s,bool visited[] , int parent){
    queue<int> q;
    visited[s] =1;
    q.push(s);
    while(!q.empty()){
        int front  = q.front();
        cout<<front<<" ";
        q.pop();
        for(int v:adj[front]){
            if(visited[v] == 0){
                visited[v] = 1;
                q.push(v);
            }
            else if(v!=parent){
                return true;
            }
        }
    }
    return false;
}
bool detectCycle(vector<int> adj[] , int V){
    bool visited[V]={0};
    for(int i=0;i<V;i++){
        if(visited[i]==false){
            if(BFS(adj,i,visited,-1)){
                return true;
            }

        }
    }
    return false;
}
int main(){
     
    int V = 10;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    addEdge(adj, 2, 4);
    addEdge(adj, 3, 5);
    addEdge(adj, 5, 6);
    bool ans = detectCycle(adj , V);
    cout<< ans;
}