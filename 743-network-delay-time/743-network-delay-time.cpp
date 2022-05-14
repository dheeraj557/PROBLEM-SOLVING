class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int> dist(n + 1, INT_MAX);
        vector<vector<pair<int, int>>> adj(n + 1);
        for(auto x : times)
            adj[x[0]].push_back({x[1], x[2]});
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, k});
        dist[k] = 0;
        vector<int> visited(n + 1, 0);
        while(!pq.empty()) {
            pair<int, int> p = pq.top(); 
            pq.pop();
            int u = p.second;
            if(visited[u]) 
                continue;
            visited[u] = 1;
            for(auto x : adj[u]) {
                int v = x.first;
                int wt = x.second;              
                if(dist[u] + wt < dist[v]) {
                    dist[v] = wt + dist[u];
                    pq.push({dist[v], v});
                }
            }
        }
        dist[0] = 0;
        int mx = *max_element(dist.begin(), dist.end());
        return mx == INT_MAX ? -1 : mx;
    }
};