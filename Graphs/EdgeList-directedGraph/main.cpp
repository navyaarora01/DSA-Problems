#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// *****for undirected graph*********
void addEdgeU(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
//*for directed graph******
void addEdgeV(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
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


int main()
{
    int V = 5;
    vector<int> adj[V];
    addEdgeV(adj, 0, 4);
    addEdgeV(adj, 0, 1);
    addEdgeV(adj, 1, 2);
    addEdgeV(adj, 1, 3);
    addEdgeV(adj, 1, 4);
    addEdgeV(adj, 2, 3);
    addEdgeV(adj, 3, 4);
    printGraph(adj, V);
    return 0;
}

// **************User input **********************
// int main()
// {
//     int V,E;
//     cout<< "Enter number of vertices to be inserted: ";
//     cin>>V;
//     cout<<endl;
//     // cout<<"Enter number of Edges to be inserted: ";
//     // cin>>E;
//     int a,j;
//     vector<int> adj[V];
//     for(int i=0;i<V;i++){
//         cout<<"Enter the vertex adjacent to vertex "<<i<<": ";
//         cin>>a; 
//          if(a == -1){
//               i++;
//               break ;
//           }
//         addEdge(adj ,i,a);
//         cout<<"Is there any other vertex adjacent to vertex "<<i<<"?-(1-yes and 0-No): ";
//         cin>> j;
//         if(j){
//             i--;
//         }
//     }
//     // for(int i=1;i<=E;i++){
//     //     cout<<"Enter the vertices where "<<i<<" edge needed to be inserted"<<endl;
//     //     cin >>a>>b;
//     //     addEdge(adj,a,b);
//     // }
//     printGraph(adj, V);
//     return 0;
// }