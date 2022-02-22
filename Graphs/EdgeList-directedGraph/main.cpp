#include <iostream>
// #include <vector>
void addEdge(Vector adj[] , int u , int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printGraph(Vector adj[] ,int V){
    for(int i=0;i<V;i++){
        for(int x : adj[i]){
            cout<<x<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    int V = 4;
    Vector<int> adj[V];
    addEdge(adj , 0,1);
    addEdge(adj , 0,2);
    addEdge(adj , 1,2);
    addEdge(adj , 1,3);
    printGraph(adj,V);
    return 0;
}