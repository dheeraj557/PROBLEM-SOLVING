class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) 
    {
        vector<pair<int,int>> adj[n];
        for(int i=0;i<redEdges.size();i++)
        {
            adj[redEdges[i][0]].push_back({redEdges[i][1],0});
        }
        for(int i=0;i<blueEdges.size();i++)
        {
            adj[blueEdges[i][0]].push_back({blueEdges[i][1],1});
        }
        queue<pair<int,int>> q; 
        vector<int> ans(n,-1);
        vector<vector<int>> vis(n,vector<int>(2,0));
        q.push({0,-1});
        vis[0][0]=1;
        vis[0][1]=1;
        int len=1;
        ans[0]=0;
        while(!q.empty()){
            int sz=q.size();
            for(int i=0;i<sz;i++)
            {
                auto f=q.front();
                q.pop();
                for(auto it:adj[f.first])
                {
                    if((!vis[it.first][it.second])&&(f.second==-1|| it.second==1-f.second))
                    {
                        if(ans[it.first]==-1 || ans[it.first]>len)
                        {
                            ans[it.first]=len;
                        }
                        vis[it.first][it.second]=1;
                        q.push(it);
                    }
                }
            }
            len++;
        }
        return ans;
    }
};