class Solution {
public:
    void dfs(string &source, string &destination, unordered_map<string,vector<pair<string,double>>>&graph, unordered_map<string,int>&vis, double &ans, double temp)
    {
        if(vis.count(source))
            return;
        vis[source]++; 
        if(source==destination)
        {
            ans=temp;
            return;
        }
        for(auto it:graph[source])
        {
            dfs(it.first,destination,graph,vis,ans,temp*it.second);
        }
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        unordered_map<string,vector<pair<string,double>>>graph;
        for(int i=0; i<equations.size(); i++)
        {
            graph[equations[i][0]].push_back({equations[i][1],values[i]});
            graph[equations[i][1]].push_back({equations[i][0],1/values[i]});
        }
        vector<double>res(queries.size());
        unordered_map<string,int>vis;
        for(int i=0; i<queries.size(); i++)
        {
            string start=queries[i][0],end=queries[i][1];
            double ans=-1.0;
            vis.clear();
            if(graph.count(start))
                dfs(start,end,graph,vis,ans,1.0);   
            res[i]=ans;
        }
        return res;
    }
};