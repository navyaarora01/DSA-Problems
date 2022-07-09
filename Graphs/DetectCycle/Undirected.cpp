#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[] , int u ,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
//**************************BFS******************************************
// bool BFS(vector<int> adj[] , int s,bool visited[] ,int V){
//     queue<int> q;
//     visited[s] =1;
//     vector<int> parent(V, -1);    //here parent array is created having each vertex as value -1;
//     q.push(s);
//     while(!q.empty()){
//         int front  = q.front();
//         // cout<<front<<" ";
//         q.pop();
//         for(int v:adj[front]){
//             if(visited[v] == 0){
//                 visited[v] = 1;
//                 parent[v] = front;
//                 q.push(v);
//             }
//             else if(v!=parent[front]){       // it means that v is visited but it is not 
                                                //the parent of front node(becoz only parents
                                                // have been vsisted by front node)so it is visited
                                                // by some other node
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// *******************************************************
bool DFS(vector<int> adj[] , int s , bool visited[] , int parent){
    visited[s] =true;
    for(int v :adj[s]){
        if(visited[v] == false){
            if(DFS(adj , v,visited , s)== true){
                return true;
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
            // if(BFS(adj,i,v isited,V)){
            //     return true;
            // }
             if(DFS(adj,i,visited,V)){
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
    if (detectCycle(adj, V))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}