#include<bits/stdc++.h>
using namesoace std;
 int main(){
    int n , m;   //node and edges
    cin>>n>>m;
    vector<int> adj;
    for(int i=0;i<m;i++){
        int u , v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 }