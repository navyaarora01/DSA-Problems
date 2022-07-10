#include <bits/stdc++.h>
using namespace std;

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
        adj[v].push_back({u,w});
    }
    
    int s = 0;
    priority_queue<pair<int,int>> pq;
    vector<int> dist(V+1 , INT16_MAX);
    dist[s] = 0;
    pq.push({0,s});

    while(!pq.empty()){
        int dist = pq.top().first;
        int prev = pq.top().second;

        pq.pop();
         for(auto it : adj[prev]){
            int next = it.first;
            int nextDist = it.second;
            if(dist[next]>dist+nextDist){    //This is relaxation function
                dist[next] = dist+nextDist;
                pq.push(dist[next] , next);
            }
         }
    }
    cout<<"The distances from source : "<<s<<" are"<<endl;
    for(int i=0;i<n;i++){
        dist[i]<<" ";
    }
    cout<<endl;
     
    return 0;
}