// In a graph there are many disconnected components so here we are printing them and counting
// these components 
//same can be done for dfs
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    // adj[v].push_back(u);
}
 
void printGraph(vector<int> adj[], int V)
{
    for (int i = 0; i < V; i++)
    {
        for (int x : adj[i])
        {
            cout <<x << " ";
        }
        cout << "\n";
    }
}
void BFS(vector<int> adj[],int s ,bool visited[]){
    queue<int> q;
    visited[s]= 1;
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
        }
    }
}
int BFSDC(vector<int> adj[],int V){
    int count=0;       //NUmber of disconnected components in a graph
    bool visited[V+1]={0};
    for(int i=0;i<V;i++){
        if(visited[i]==false){
            count ++;
            BFS(adj , i,visited);
        }
    }
    return count;

}
int main()
{
    
    int V = 10;
    vector<int> adj[V];
    addEdge(adj, 0, 4);
    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    addEdge(adj, 5, 6);
    addEdge(adj, 5, 7);
    addEdge(adj, 6, 7);
    addEdge(adj, 8, 9);
    addEdge(adj, 8, 10);
    addEdge(adj, 9, 8);
    addEdge(adj, 9, 10);
    
    printGraph(adj, V);
    int count =BFSDC(adj , V);
    cout<<endl;
    cout<<"The number of disconncted componnets in the graph are "<<count<<endl;
    return 0;
}
// Time complexity = O(V+E)