bool BFS(vector<int> adj[] , int s,bool visited[] ,int V){
    queue<int> q;
    visited[s] =1;
    vector<int> parent(V, -1);    //here parent array is created having each vertex as value -1;
    q.push(s);
    while(!q.empty()){
        int front  = q.front();
        // cout<<front<<" ";
        q.pop();
        for(int v:adj[front]){
            if(visited[v] == 0){
                visited[v] = 1;
                parent[front] = v;
                q.push(v);
            }
            else if(v!=parent[front]){
                return true;
            }
        }
    }
    return false;
