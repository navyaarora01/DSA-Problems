#include<bits/stdc++.h>
using namespace std;

bool bipartiteBFS(int src , vector<int> adj[] , vector<int> color[]){
    queue<int> q;
    q.push(src);
    color[src] = 1;
    while(!q.empty()){
        int curr = q.front();

        for(int it : adj[curr]){
            if(color[it] == -1){
                color[it ] = 1-color[curr];
                q.push(it);
            }
            else if(color[it] == color[curr]){
                return false;
            }
        }
        q.pop();
       
    } 
    return true;
}

bool bipartite( vector<int> adj[] , int n){
    vector<int> color;
    color.assign(n , -1);

    for(int i=0;i<n;i++){
        if(color[i] == -1){
            if(!bipartiteBFS(i , adj , color)){
                return false;
            }
        }
    }
    return true;
}

 int main(){
    int n , m;   //node and edges
    cin>>n>>m;
    vector<int> adj[n];
    for(int i=0;i<m;i++){
        int u , v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if(bipartite(adj , n)){
        cout<<"TRUE"<<endl;
    }
    else{
        cout<<"FALSE"<<endl;
    }
 }

