class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(n==1) 
            return true;
        vector<vector<int>>adj(n);
        for(auto it:edges)
        {
            int u=it[0];
            int v=it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool>vis(n);
        queue<int>q;
        q.push(source);
        vis[source]=1;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            for(auto it:adj[node])
            {
                if(it==destination)
                    return true;
                else if(!vis[it])
                {
                    vis[it]=1;
                    q.push(it);
                }
            }
        }      
        return false;
    }
};