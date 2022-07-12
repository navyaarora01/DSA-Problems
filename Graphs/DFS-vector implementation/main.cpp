#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
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
// ******************1st method(by stack)**********
void DFS(vector<int> adj[], int V)
{
    cout << "Enter the starting vertex for DFS: " << endl;
    int s;
    cin >> s;
    bool visited[V + 1] = {0};
    stack<int> st;
    visited[s] = 1;
    st.push(s);
    while (!st.empty())
    {
        int front = st.top();
        cout << front << " ";
        st.pop();
        for (int v : adj[front])
        {
            if (visited[v] == 0)
            {
                visited[v] = 1;
                st.push(v);
            }
        }
    }
}
//           ****REcursive Approach***********
/*void DFSrec(vector<int> adj[] , int s , bool visited[]){
    visited[s] = true;
    cout<<s<<" ";
    for(int u : adj[s]){
        if(visited[u]==false){
            DFSrec(adj , u , visited);
        }
    }
}
void DFS(vector<int> adj[], int V)
{
    cout << "Enter the starting vertex for DFS: " << endl;
    int s;
    cin >> s;
    bool visited[V + 1] = {0};
    DFSrec(adj , s, visited);
}  */
int main()
{
    int V, E;
    cout << "Enter number of vertices to be inserted: ";
    cin >> V;
    cout << endl;
    int a, j;
    vector<int> adj[V];
    for (int i = 0; i < V; i++)
    {
        cout << "Enter the vertex adjacent to vertex " << i << ": ";
        cin >> a;
        if (a != 101)
        {
            addEdge(adj, i, a);
            cout << "Is there any other vertex adjacent to vertex " << i << "?-(1-yes and 0-No): ";
            cin >> j;
            if (j)
            {
                i--;
            }
        }
    }
    printGraph(adj, V);
    DFS(adj, V);
    return 0;
}