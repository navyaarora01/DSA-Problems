#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);      //coz directed graph
    // adj[v].push_back(u);
}
 
void printGraph(vector<int> adj[], int V)
{
    for (int i = 0; i < V; i++)
    {
        for (int x : adj[i])
        {
            cout << x << " ";
        }
        cout << "\n";
    }
}
void BFS(vector<int> adj[],int V){
    cout<<"Enter the starting vertex for BFS: "<<endl;
    int s;
    cin>>s;
    bool visited[V+1]={0};
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
int main()
{
    int V,E;
    cout<< "Enter number of vertices to be inserted: ";
    cin>>V;
    cout<<endl;
    int a,j;
    vector<int> adj[V];
    for(int i=0;i<V;i++){
        cout<<"Enter the vertex adjacent to vertex "<<i<<": ";
        cin>>a; 
        addEdge(adj ,i,a);
        cout<<"Is there any other vertex adjacent to vertex "<<i<<"?-(1-yes and 0-No): ";
        cin>> j;
        if(j==101){     //101 means no edge attached
            i++;
        }
        if(j){
            i--;
        }
    }
    printGraph(adj, V);
    BFS(adj , V);
    return 0;
}
// Time complexity = O(V+E)