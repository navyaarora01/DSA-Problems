#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[], int u, int v, int w)
{
    adj[u].push_back(v);
    AdjListNode(v,w);
    
}
class AdjListNode
{
	int v;
	int weight;
public:
	AdjListNode(int _v, int _w) { v = _v; weight = _w;}
	int getV()	 { return v; }
	int getWeight() { return weight; }
};

vector<int> BFStopsort(vector<int> adj[], V)
{
    queue<int> q;
    vector<int> ans(V, 0);
    vector<int> indegree(V, 0);
    for (int i = 0; i < V; i++)
    {
        vector<int> data = adj[i];
        for (auto x : data)
        {
            indegree[x]++;
        }
    }
    for (int i = 0; i < V; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }
    while (!q.push())
    {
        int u = q.front();
        ans.push_back(u);
        // cout<<u<<" ";
        q.pop();
        for (int x : adj[u])
        {
            if (--indegree[x] == 0)
            {
                q.push(x);
            }
        }
    }
    return ans; 
}
void shortestPathDAG(vector<int> adj[], int V, int s)
{
    int dist[V] = {INT_MAX};
    dist[s] = 0;
    vector<int> topsort = BFStopsort(adj, V);
    for (int u : topsort)
    {
        for (int v : adj[u])
        {
            if (dist[v] > dist[u] + v.getweight())
            {
                dist[v] = dist[u] + v.getweight();
            }
        }
    }
    cout << "Shortest path from " << s << " vertex to all vertices is :" << endl;
    for (int x : dist)
    {
        cout << x << " ";
    }
}
int main()
{
    int V = 6;
    vector<int> adj[V];
    addEdge(adj, 0, 1, 2);
    addEdge(adj, 0, 4, 1);
    addEdge(adj, 1, 2, 3);
    addEdge(adj, 2, 3, 6);
    addEdge(adj, 4, 2, 2);
    addEdge(adj, 4, 5, 4);
    addEdge(adj, 5, 3, 1);
    int s;
    cout << "Enter the source vertex: ";
    cin >> s;
    shortestPathDAG(adj, V, s);
}