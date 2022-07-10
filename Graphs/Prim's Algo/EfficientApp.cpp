#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, m;
    cout << "hi";
    cin >> N >> m;
    vector<pair<int, int>> adj[N];

    int a, b, wt;
    
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b >> wt;
        adj[a].push_back({b, wt});
        adj[b].push_back(make_pair(a, wt));
    }

    int parent[N];

    int key[N];

    bool mstSet[N];

    for (int i = 0; i < N; i++)
        key[i] = INT_MAX, mstSet[i] = false, parent[i] = -1;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    key[0] = 0;
    parent[0] = -1;
    pq.push({0, 0}); //{weight , vertex}
    for (int count = 0; count < N - 1; count++)
    {

        int u = pq.top().second;
        pq.pop();

        mstSet[u] = true;

        for (auto x : adj[u])
        {
            int v = x.first;
            int weight = x.second;
            if (mstSet[v] == false && weight < key[v])
                parent[v] = u, key[v] = weight;
                pq.push({key[v] , v});
        }
    }

    for (int i = 1; i < N; i++)
        cout << parent[i] << " - " << i << " \n";
    return 0;
}

// tc = O(nlogn) 
