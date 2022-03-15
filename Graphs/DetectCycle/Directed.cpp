#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[] , int u ,int v){
    adj[u].push_back(v);
}
bool DFS(vector<int> adj[] , int s , bool visited[] , bool recSt[]){
    visited[s] =true;
    recSt[s]= true;
    for(int v :adj[s]){
        if(visited[v] == false){
            if(DFS(adj , v,visited , recSt)== true){
                return true;
            }
            else if(recSt[v]==true){
                return true;
            }
        }
        
    }recSt[s] = false;
        return false;
}
bool detectCycle(vector<int> adj[] , int V){
    bool visited[V]={0};
    bool recSt[V]={0};                //recursion stack
    for(int i=0;i<V;i++){
        if(visited[i]==false){
             if(DFS(adj,i,visited,recSt)){
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
    addEdge(adj, 2, 1);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    addEdge(adj, 4, 5);
    addEdge(adj, 5, 3);
    if (detectCycle(adj, V))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}