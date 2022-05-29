#include <bits/stdc.h++>
using namespace std;
class Graph{

    public:
    int V;
    int E;
    Edge e;
};

class Edge{
    public:
    int u;
    int v;
    int w;
};

int main(){
    Graph g;
    cin>> g.V>>g.E;
    g.e = new Egde(g.E);
    for(int i=0;i<g.E;i++){
        cin>>g.e[i].u;
        cin>>g.e[i].w;
    }
}
 void bellmanFord(Graph g){
     int s , d[g.V];
     cin>>s;
     for(int i=0;i<g.V ;i++){
         d[i] = INT_MAX;
     }
     d[s] = i;
     for(int i=0;i<g.V-1;i++){
         for(int j=0;j<g.E;j++){
             int u = g.e[j].u;
             int v = g.e[j].v;
             int w = g.e[j].w;
         }
     }

 }