#include <bits/stdc++.h>
#define INF INT_MAX 
using namespace std;
void topsort(stack<int> s , vector<pair<int,int>> adj[] , int V ,int &visited[], int u){
    visited[u] = 1;
    for(auto x : adj[u]){
        if(visited[x.first]==0){
            topsort(s , adj , V , visited , x.first);
        }
    }
    s.push(u);
}
void shortestPath(vector<pair<int,int>> adj[] , int V){
    int s = 0;
    int visited[V]={0};    
    int dist[V]={INT_MAX};  
    dist[s] = 0;
    stack<int> st;
    for(int i=0;i<V;i++){
        if(visited[i]==0){
            topsort(st , adj , V, visited, i);
        }
    }
    while(!st.empty()){
        int top = st.top();
        st.pop();
         if(dist[top]!=INT_MAX){       //this for the first node where we check that distance from source is 0
             for(auto v : adj[top]){
                 if(dist[v.first]>dist[top] + v.second){
                     dist[v.first]=dist[top] + v.second;
                 }
             }
         }
    }
    cout << "Shortest path from " << s << " vertex to all vertices is :" << endl;
   for (int i=0;i<V;i++)
    {
        cout << dist[i] << " ";
    }  

}

int main(){
    int V,E;
    vector<pair<int,int>> adj[V];
    cout<<"Enter no .of vertices: ";
    cin>>V;
    cout<<"Enter No. of Edges: ";
    cin>>E;
    for(int i=0;i<E;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
    }
    shortestPath(adj , V);
    return 0;
} 