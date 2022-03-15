//checking if the graph is cyclic or not using bfs topsort coz it is only applicable to directed acyclic graphs
// so when we will run that funcn top sort won't be printed 
#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[] , int u ,int v,int indegree[]){
    adj[u].push_back(v);
    indegree[v]++;
}

void BFStopsort(vector<int> adj[] ,int indegree[] ,int V){
    queue<int> q;
    for(int i=0;i<V;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int u = q.front();
        cout<<u<<" ";
        q.pop();

        for(int x :adj[u]){
            if(--indegree[x]==0){
                q.push(x);
            }
        }
    }
}


int main(){
    int V = 13;
    int indegree[V]={0};
    vector<int> adj[V];
    int visited[V]={0};
    addEdge(adj , 0 ,1 ,indegree);
    addEdge(adj , 0 ,2 ,indegree);
    addEdge(adj , 1 ,4 ,indegree);
    addEdge(adj , 2 ,4 ,indegree);
    addEdge(adj , 3 ,2 ,indegree);
    addEdge(adj , 3 ,5 ,indegree);
    addEdge(adj , 4 ,6 ,indegree);
    addEdge(adj , 4 ,7 ,indegree);
    addEdge(adj , 5 ,9 ,indegree);
    addEdge(adj , 5 ,10 ,indegree);
    addEdge(adj , 6 ,8 ,indegree);
    addEdge(adj , 7 ,8 ,indegree);
    addEdge(adj , 7 ,9 ,indegree);
    addEdge(adj , 8 ,11 ,indegree);
    addEdge(adj , 9 ,11 ,indegree);
    addEdge(adj , 9 ,12 ,indegree);
    addEdge(adj , 10,9 ,indegree);
    BFStopsort(adj , indegree, V);
    return 0;
    
}


#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[] , int u ,int v,int indegree[]){
    adj[u].push_back(v);
    indegree[v]++;
}

void isCyclicTopsort(vector<int> adj[] ,int indegree[] ,int V){
    queue<int> q;
    for(int i=0;i<V;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    int count = 0;              //at end if this count = V then there is no cycle but if less than cycle exists
    while(!q.empty()){
        int u = q.front();
        // cout<<u<<" ";
        q.pop();

        for(int x :adj[u]){
            if(--indegree[x]==0){
                q.push(x);
            }
        }
        count++;
    }
    cout<<endl;
    // cout<<count<<endl;
    if (count != V) {
        cout << "There exists a cycle in the graph\n";
        return;
    }
    else{
        cout<<"Graph is Acyclic in nature\n";
        return;
    }
}


int main(){
    int V = 13;
    int indegree[V]={0};
    vector<int> adj[V];
    int visited[V]={0};
    addEdge(adj , 0 ,1 ,indegree);
    addEdge(adj , 0 ,2 ,indegree);
    addEdge(adj , 1 ,4 ,indegree);
    addEdge(adj , 2 ,4 ,indegree);
    addEdge(adj , 3 ,2 ,indegree);
    addEdge(adj , 3 ,5 ,indegree);         //
    addEdge(adj , 4 ,6 ,indegree);
    addEdge(adj , 4 ,7 ,indegree);
    addEdge(adj , 5 ,9 ,indegree);         //
    addEdge(adj , 5 ,10 ,indegree);
    addEdge(adj , 6 ,8 ,indegree);
    addEdge(adj , 7 ,8 ,indegree);
    addEdge(adj , 7 ,9 ,indegree);
    addEdge(adj , 8 ,11 ,indegree);
    addEdge(adj , 9 ,11 ,indegree);
    addEdge(adj , 9 ,12 ,indegree);
    addEdge(adj , 10,9 ,indegree);
    isCyclicTopsort(adj , indegree, V);
    return 0;
    
}
//tc = O(V+E)