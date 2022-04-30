class Solution {
public:
    double solve(unordered_map<string,vector<pair<string,double>>>&adj_list,unordered_set<string>&s,string a,string b)
    {
        if(adj_list.find(a)==adj_list.end()||adj_list.find(b)==adj_list.end())
        {
            return -1.0;
        }
        if(a==b)
        {
            return 1.0;
        }
        s.insert(a);
        for(auto it:adj_list[a])
        {
            if(s.count(it.first)==0)
            {
                double res= solve(adj_list,s,it.first,b);
                if(res!=-1)
                {
                    return res*it.second;
                }
            }
        }
        return -1.0;
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) 
    {
        unordered_map<string,vector<pair<string,double>>>adj_list;
        int n=equations.size();
        for(int i=0;i<n;i++)
        {
            adj_list[equations[i][0]].push_back({equations[i][1],values[i]});
            adj_list[equations[i][1]].push_back({equations[i][0],1.0/values[i]});
        }
        vector<double>ans;
        for(int i=0;i<queries.size();i++)
        {
            unordered_set<string>vis;
            double res=solve(adj_list,vis,queries[i][0],queries[i][1]);
            ans.push_back(res);
        }
        return ans;   
    }
};